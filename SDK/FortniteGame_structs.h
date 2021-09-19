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

// Enum FortniteGame.EFortAIDirectorEvent
enum class FortniteGame_EFortAIDirectorEvent : uint8_t
{
	EFortAIDirectorEvent__PlayerAIEnemies = 0,
	EFortAIDirectorEvent__PlayerTakeDamage = 1,
	EFortAIDirectorEvent__PlayerHealth = 2,
	EFortAIDirectorEvent__PlayerDeath = 3,
	EFortAIDirectorEvent__PlayerLookAtAIEnemy = 4,
	EFortAIDirectorEvent__PlayerDamageAIEnemy = 5,
	EFortAIDirectorEvent__PlayerKillAIEnemy = 6,
	EFortAIDirectorEvent__PlayerHealingPotential = 7,
	EFortAIDirectorEvent__PlayerAmmoLight = 8,
	EFortAIDirectorEvent__PlayerAmmoMedium = 9,
	EFortAIDirectorEvent__PlayerAmmoHeavy = 10,
	EFortAIDirectorEvent__PlayerAmmoShells = 11,
	EFortAIDirectorEvent__PlayerAmmoEnergy = 12,
	EFortAIDirectorEvent__PlayerAINear = 13,
	EFortAIDirectorEvent__PlayerMovement = 14,
	EFortAIDirectorEvent__ObjectiveTakeDamage = 15,
	EFortAIDirectorEvent__ObjectiveHealth = 16,
	EFortAIDirectorEvent__ObjectiveDestroyed = 17,
	EFortAIDirectorEvent__TrapFired = 18,
	EFortAIDirectorEvent__TrapDamagedAIEnemy = 19,
	EFortAIDirectorEvent__ObjectivePathCost = 20,
	EFortAIDirectorEvent__PlayerPathCost = 21,
	EFortAIDirectorEvent__ObjectiveNearbyBuildingDamaged = 22,
	EFortAIDirectorEvent__Max_None = 23,
	EFortAIDirectorEvent__EFortAIDirectorEvent_MAX = 24,

};

// Enum FortniteGame.EKeepDefenseState
enum class FortniteGame_EKeepDefenseState : uint8_t
{
	EKeepDefenseState__Inactive    = 0,
	EKeepDefenseState__Warmup      = 1,
	EKeepDefenseState__Defense     = 2,
	EKeepDefenseState__LastAlive   = 3,
	EKeepDefenseState__Max         = 4,
	EKeepDefenseState__EKeepDefenseState_MAX = 5,

};

// Enum FortniteGame.ECaptureState
enum class FortniteGame_ECaptureState : uint8_t
{
	ECaptureState__CS_Idle         = 0,
	ECaptureState__CS_Capturing    = 1,
	ECaptureState__CS_Contested    = 2,
	ECaptureState__CS_Resetting    = 3,
	ECaptureState__CS_Captured     = 4,
	ECaptureState__CS_Reset        = 5,
	ECaptureState__CS_MAX          = 6,

};

// Enum FortniteGame.EFortTeam
enum class FortniteGame_EFortTeam : uint8_t
{
	EFortTeam__HumanCampaign       = 0,
	EFortTeam__Monster             = 1,
	EFortTeam__HumanPvP_Team1      = 2,
	EFortTeam__HumanPvP_Team2      = 3,
	EFortTeam__HumanPvP_Team3      = 4,
	EFortTeam__HumanPvP_Team4      = 5,
	EFortTeam__HumanPvP_Team5      = 6,
	EFortTeam__HumanPvP_Team6      = 7,
	EFortTeam__HumanPvP_Team7      = 8,
	EFortTeam__HumanPvP_Team8      = 9,
	EFortTeam__HumanPvP_Team9      = 10,
	EFortTeam__HumanPvP_Team10     = 11,
	EFortTeam__Spectator           = 12,
	EFortTeam__MAX                 = 13,
	EFortTeam__EFortTeam_MAX       = 14,

};

// Enum FortniteGame.EFortCustomPartType
enum class FortniteGame_EFortCustomPartType : uint8_t
{
	EFortCustomPartType__Head      = 0,
	EFortCustomPartType__Body      = 1,
	EFortCustomPartType__Hat       = 2,
	EFortCustomPartType__Backpack  = 3,
	EFortCustomPartType__Charm     = 4,
	EFortCustomPartType__Face      = 5,
	EFortCustomPartType__NumTypes  = 6,
	EFortCustomPartType__EFortCustomPartType_MAX = 7,

};

// Enum FortniteGame.EFortDayPhase
enum class FortniteGame_EFortDayPhase : uint8_t
{
	EFortDayPhase__Morning         = 0,
	EFortDayPhase__Day             = 1,
	EFortDayPhase__Evening         = 2,
	EFortDayPhase__Night           = 3,
	EFortDayPhase__NumPhases       = 4,
	EFortDayPhase__EFortDayPhase_MAX = 5,

};

// Enum FortniteGame.EFortPersistentResources
enum class FortniteGame_EFortPersistentResources : uint8_t
{
	EFortPersistentResources__Power = 0,
	EFortPersistentResources__ManufacturingParts = 1,
	EFortPersistentResources__Supplies = 2,
	EFortPersistentResources__Food = 3,
	EFortPersistentResources__Max_None = 4,
	EFortPersistentResources__EFortPersistentResources_MAX = 5,

};

// Enum FortniteGame.EFortAttributeDisplay
enum class FortniteGame_EFortAttributeDisplay : uint8_t
{
	EFortAttributeDisplay__BasicInt = 0,
	EFortAttributeDisplay__NegativeImpliesInfiniteInt = 1,
	EFortAttributeDisplay__BasicFloat = 2,
	EFortAttributeDisplay__NegativeImpliesInfiniteFloat = 3,
	EFortAttributeDisplay__BasicString = 4,
	EFortAttributeDisplay__NormalizedPercentage = 5,
	EFortAttributeDisplay__StringArray = 6,
	EFortAttributeDisplay__SlateBrush = 7,
	EFortAttributeDisplay__DoNotDisplay = 8,
	EFortAttributeDisplay__None_Max = 9,
	EFortAttributeDisplay__EFortAttributeDisplay_MAX = 10,

};

// Enum FortniteGame.EFortBrushSize
enum class FortniteGame_EFortBrushSize : uint8_t
{
	EFortBrushSize__VeryVerySmall  = 0,
	EFortBrushSize__VerySmall      = 1,
	EFortBrushSize__Small          = 2,
	EFortBrushSize__Medium         = 3,
	EFortBrushSize__Large          = 4,
	EFortBrushSize__VeryLarge      = 5,
	EFortBrushSize__EFortBrushSize_MAX = 6,

};

// Enum FortniteGame.EMyTownBuildingState
enum class FortniteGame_EMyTownBuildingState : uint8_t
{
	EMyTownBuildingState__Locked   = 0,
	EMyTownBuildingState__CanBuild = 1,
	EMyTownBuildingState__CanUpgrade = 2,
	EMyTownBuildingState__Idle     = 3,
	EMyTownBuildingState__EMyTownBuildingState_MAX = 4,

};

// Enum FortniteGame.EMatchmakingCompleteResult
enum class FortniteGame_EMatchmakingCompleteResult : uint8_t
{
	EMatchmakingCompleteResult__NotStarted = 0,
	EMatchmakingCompleteResult__Cancelled = 1,
	EMatchmakingCompleteResult__NoResults = 2,
	EMatchmakingCompleteResult__Failure = 3,
	EMatchmakingCompleteResult__CreateFailure = 4,
	EMatchmakingCompleteResult__Success = 5,
	EMatchmakingCompleteResult__EMatchmakingCompleteResult_MAX = 6,

};

// Enum FortniteGame.EMatchmakingState
enum class FortniteGame_EMatchmakingState : uint8_t
{
	EMatchmakingState__NotMatchmaking = 0,
	EMatchmakingState__CancelingMatchmaking = 1,
	EMatchmakingState__ReleasingLock = 2,
	EMatchmakingState__AcquiringLock = 3,
	EMatchmakingState__LockAcquistionFailure = 4,
	EMatchmakingState__FindingEmptyServer = 5,
	EMatchmakingState__FindingExistingSession = 6,
	EMatchmakingState__TestingEmptyServers = 7,
	EMatchmakingState__TestingExistingSessions = 8,
	EMatchmakingState__JoiningExistingSession = 9,
	EMatchmakingState__NoMatchesAvailable = 10,
	EMatchmakingState__CleaningUpExisting = 11,
	EMatchmakingState__HandlingFailure = 12,
	EMatchmakingState__JoinSuccess = 13,
	EMatchmakingState__EMatchmakingState_MAX = 14,

};

// Enum FortniteGame.EFortPartyRestriction
enum class FortniteGame_EFortPartyRestriction : uint8_t
{
	EFortPartyRestriction__Invalid = 0,
	EFortPartyRestriction__PartyCreatePending = 1,
	EFortPartyRestriction__AlreadyInParty = 2,
	EFortPartyRestriction__PartyFull = 3,
	EFortPartyRestriction__GameFull = 4,
	EFortPartyRestriction__Private = 5,
	EFortPartyRestriction__CurrentlyNotAvailable = 6,
	EFortPartyRestriction__Max     = 7,
	EFortPartyRestriction__EFortPartyRestriction_MAX = 8,

};

// Enum FortniteGame.EFortFriendRequestStatus
enum class FortniteGame_EFortFriendRequestStatus : uint8_t
{
	EFortFriendRequestStatus__None = 0,
	EFortFriendRequestStatus__Accepted = 1,
	EFortFriendRequestStatus__PendingReceived = 2,
	EFortFriendRequestStatus__PendingSent = 3,
	EFortFriendRequestStatus__EFortFriendRequestStatus_MAX = 4,

};

// Enum FortniteGame.EFortPartyState
enum class FortniteGame_EFortPartyState : uint8_t
{
	EFortPartyState__WorldView     = 0,
	EFortPartyState__TheaterView   = 1,
	EFortPartyState__Matchmaking   = 2,
	EFortPartyState__PostMatchmaking = 3,
	EFortPartyState__EFortPartyState_MAX = 4,

};

// Enum FortniteGame.EFortPartyTransition
enum class FortniteGame_EFortPartyTransition : uint8_t
{
	EFortPartyTransition__Idle     = 0,
	EFortPartyTransition__Joining  = 1,
	EFortPartyTransition__Leaving  = 2,
	EFortPartyTransition__Max      = 3,
	EFortPartyTransition__EFortPartyTransition_MAX = 4,

};

// Enum FortniteGame.EFortQuestObjectiveType
enum class FortniteGame_EFortQuestObjectiveType : uint8_t
{
	EFortQuestObjectiveType__Kill  = 0,
	EFortQuestObjectiveType__Collect = 1,
	EFortQuestObjectiveType__Complete = 2,
	EFortQuestObjectiveType__Win   = 3,
	EFortQuestObjectiveType__LevelUp = 4,
	EFortQuestObjectiveType__Custom = 5,
	EFortQuestObjectiveType__Client = 6,
	EFortQuestObjectiveType__EFortQuestObjectiveType_MAX = 7,

};

// Enum FortniteGame.EAIHotSpotSlot
enum class FortniteGame_EAIHotSpotSlot : uint8_t
{
	EAIHotSpotSlot__Free           = 0,
	EAIHotSpotSlot__Claimed        = 1,
	EAIHotSpotSlot__Occupied       = 2,
	EAIHotSpotSlot__Blocked        = 3,
	EAIHotSpotSlot__Disabled       = 4,
	EAIHotSpotSlot__EAIHotSpotSlot_MAX = 5,

};

// Enum FortniteGame.EAIHotSpotAssignmentFilter
enum class FortniteGame_EAIHotSpotAssignmentFilter : uint8_t
{
	EAIHotSpotAssignmentFilter__All = 0,
	EAIHotSpotAssignmentFilter__WithSlots = 1,
	EAIHotSpotAssignmentFilter__WaitingList = 2,
	EAIHotSpotAssignmentFilter__EAIHotSpotAssignmentFilter_MAX = 3,

};

// Enum FortniteGame.EAIHotSpotSlotFilter
enum class FortniteGame_EAIHotSpotSlotFilter : uint8_t
{
	EAIHotSpotSlotFilter__All      = 0,
	EAIHotSpotSlotFilter__AvailableOnly = 1,
	EAIHotSpotSlotFilter__UnavailableOnly = 2,
	EAIHotSpotSlotFilter__EAIHotSpotSlotFilter_MAX = 3,

};

// Enum FortniteGame.EFortBangType
enum class FortniteGame_EFortBangType : uint8_t
{
	EFortBangType__Invalid         = 0,
	EFortBangType__Custom          = 1,
	EFortBangType__PlayTab         = 2,
	EFortBangType__HeroesTab       = 3,
	EFortBangType__VaultTab        = 4,
	EFortBangType__StoreTab        = 5,
	EFortBangType__FriendsButton   = 6,
	EFortBangType__PartyInviteButton = 7,
	EFortBangType__DailyRewardsButton = 8,
	EFortBangType__QuestsButton    = 9,
	EFortBangType__VaultSchematics = 10,
	EFortBangType__VaultPersonnel  = 11,
	EFortBangType__VaultResources  = 12,
	EFortBangType__VaultMelee      = 13,
	EFortBangType__VaultRanged     = 14,
	EFortBangType__VaultConsumables = 15,
	EFortBangType__VaultIngredients = 16,
	EFortBangType__VaultTraps      = 17,
	EFortBangType__EFortBangType_MAX = 18,

};

// Enum FortniteGame.EFortEventNameType
enum class FortniteGame_EFortEventNameType : uint8_t
{
	EFortEventNameType__Mission    = 0,
	EFortEventNameType__Client     = 1,
	EFortEventNameType__EFortEventNameType_MAX = 2,

};

// Enum FortniteGame.EFortCraftFailCause
enum class FortniteGame_EFortCraftFailCause : uint8_t
{
	EFortCraftFailCause__Unknown   = 0,
	EFortCraftFailCause__NotEnoughResources = 1,
	EFortCraftFailCause__InventoryFull = 2,
	EFortCraftFailCause__InsufficientTeamLevel = 3,
	EFortCraftFailCause__CraftingQueueFull = 4,
	EFortCraftFailCause__CurrentlyLocked = 5,
	EFortCraftFailCause__EFortCraftFailCause_MAX = 6,

};

// Enum FortniteGame.EKeepContainerType
enum class FortniteGame_EKeepContainerType : uint8_t
{
	EKeepContainerType__Base       = 0,
	EKeepContainerType__Storeroom  = 1,
	EKeepContainerType__FirstAid   = 2,
	EKeepContainerType__Armory     = 3,
	EKeepContainerType__Workshop   = 4,
	EKeepContainerType__AmmoStash  = 5,
	EKeepContainerType__Max        = 6,
	EKeepContainerType__EKeepContainerType_MAX = 7,

};

// Enum FortniteGame.EReadyCheckState
enum class FortniteGame_EReadyCheckState : uint8_t
{
	EReadyCheckState__CheckStarted = 0,
	EReadyCheckState__Ready        = 1,
	EReadyCheckState__NotReady     = 2,
	EReadyCheckState__EReadyCheckState_MAX = 3,

};

// Enum FortniteGame.ERichPresenceStateChange
enum class FortniteGame_ERichPresenceStateChange : uint8_t
{
	ERichPresenceStateChange__AutoUpdate = 0,
	ERichPresenceStateChange__Idle = 1,
	ERichPresenceStateChange__Active = 2,
	ERichPresenceStateChange__Busy = 3,
	ERichPresenceStateChange__NotBusy = 4,
	ERichPresenceStateChange__ERichPresenceStateChange_MAX = 5,

};

// Enum FortniteGame.EFortAlteration
enum class FortniteGame_EFortAlteration : uint8_t
{
	EFortAlteration__AttributeSlot = 0,
	EFortAlteration__GameplaySlot  = 1,
	EFortAlteration__ComplexCosmeticSlot = 2,
	EFortAlteration__ColorSlot     = 3,
	EFortAlteration__HeroSpecializationTier1Slot = 4,
	EFortAlteration__HeroSpecializationTier2Slot = 5,
	EFortAlteration__HeroSpecializationTier3Slot = 6,
	EFortAlteration__HeroSpecializationTier4Slot = 7,
	EFortAlteration__EFortAlteration_MAX = 8,

};

// Enum FortniteGame.EFortTeamAffiliation
enum class FortniteGame_EFortTeamAffiliation : uint8_t
{
	EFortTeamAffiliation__Friendly = 0,
	EFortTeamAffiliation__Neutral  = 1,
	EFortTeamAffiliation__Hostile  = 2,
	EFortTeamAffiliation__EFortTeamAffiliation_MAX = 3,

};

// Enum FortniteGame.EFortInventoryType
enum class FortniteGame_EFortInventoryType : uint8_t
{
	EFortInventoryType__World      = 0,
	EFortInventoryType__Account    = 1,
	EFortInventoryType__MAX        = 2,
	EFortInventoryType__EFortInventoryType_MAX = 3,

};

// Enum FortniteGame.EFortAIUtility
enum class FortniteGame_EFortAIUtility : uint8_t
{
	EFortAIUtility__KillPlayersMelee = 0,
	EFortAIUtility__KillPlayersRanged = 1,
	EFortAIUtility__KillPlayersArtillery = 2,
	EFortAIUtility__DestroyBuildingsMelee = 3,
	EFortAIUtility__DestroyBuildingsRanged = 4,
	EFortAIUtility__DestroyBuildingsArtillery = 5,
	EFortAIUtility__DestroyTraps   = 6,
	EFortAIUtility__Tank           = 7,
	EFortAIUtility__Infiltrate     = 8,
	EFortAIUtility__Mob            = 9,
	EFortAIUtility__Support        = 10,
	EFortAIUtility__Kiting         = 11,
	EFortAIUtility__AreaOfDenial   = 12,
	EFortAIUtility__DisableTraps   = 13,
	EFortAIUtility__Dormant        = 14,
	EFortAIUtility__Assassin       = 15,
	EFortAIUtility__MAX            = 16,
	EFortAIUtility__EFortAIUtility_MAX = 17,

};

// Enum FortniteGame.EFortTileEdgeType
enum class FortniteGame_EFortTileEdgeType : uint8_t
{
	EFortTileEdgeType__Undefined   = 0,
	EFortTileEdgeType__Outer       = 1,
	EFortTileEdgeType__Transition  = 2,
	EFortTileEdgeType__Inner       = 3,
	EFortTileEdgeType__Border      = 4,
	EFortTileEdgeType__BorderTransitionSingle = 5,
	EFortTileEdgeType__BorderTransitionDouble = 6,
	EFortTileEdgeType__MAX         = 7,
	EFortTileEdgeType__EFortTileEdgeType_MAX = 8,

};

// Enum FortniteGame.EFortRequestedGameplayAction
enum class FortniteGame_EFortRequestedGameplayAction : uint8_t
{
	EFortRequestedGameplayAction__ContinuePlaying = 0,
	EFortRequestedGameplayAction__StartPlaying = 1,
	EFortRequestedGameplayAction__StopPlaying = 2,
	EFortRequestedGameplayAction__EnterZone = 3,
	EFortRequestedGameplayAction__LeaveZone = 4,
	EFortRequestedGameplayAction__ReturnToMainMenu = 5,
	EFortRequestedGameplayAction__QuitGame = 6,
	EFortRequestedGameplayAction__Invalid = 7,
	EFortRequestedGameplayAction__EFortRequestedGameplayAction_MAX = 8,

};

// Enum FortniteGame.EFortGameplayState
enum class FortniteGame_EFortGameplayState : uint8_t
{
	EFortGameplayState__NormalGameplay = 0,
	EFortGameplayState__WaitingToStart = 1,
	EFortGameplayState__EndOfZone  = 2,
	EFortGameplayState__EnteringZone = 3,
	EFortGameplayState__LeavingZone = 4,
	EFortGameplayState__Invalid    = 5,
	EFortGameplayState__EFortGameplayState_MAX = 6,

};

// Enum FortniteGame.EFortEncounterDirection
enum class FortniteGame_EFortEncounterDirection : uint8_t
{
	EFortEncounterDirection__North = 0,
	EFortEncounterDirection__NorthEast = 1,
	EFortEncounterDirection__East  = 2,
	EFortEncounterDirection__SouthEast = 3,
	EFortEncounterDirection__South = 4,
	EFortEncounterDirection__SouthWest = 5,
	EFortEncounterDirection__West  = 6,
	EFortEncounterDirection__NorthWest = 7,
	EFortEncounterDirection__Max_None = 8,
	EFortEncounterDirection__EFortEncounterDirection_MAX = 9,

};

// Enum FortniteGame.EFortMovementUrgency
enum class FortniteGame_EFortMovementUrgency : uint8_t
{
	EFortMovementUrgency__None     = 0,
	EFortMovementUrgency__Low      = 1,
	EFortMovementUrgency__Medium   = 2,
	EFortMovementUrgency__High     = 3,
	EFortMovementUrgency__NumLevels = 4,
	EFortMovementUrgency__EFortMovementUrgency_MAX = 5,

};

// Enum FortniteGame.EFortMovementStyle
enum class FortniteGame_EFortMovementStyle : uint8_t
{
	EFortMovementStyle__Running    = 0,
	EFortMovementStyle__Walking    = 1,
	EFortMovementStyle__Charging   = 2,
	EFortMovementStyle__Sprinting  = 3,
	EFortMovementStyle__EFortMovementStyle_MAX = 4,

};

// Enum FortniteGame.EFortWeaponTriggerType
enum class FortniteGame_EFortWeaponTriggerType : uint8_t
{
	EFortWeaponTriggerType__OnPress = 0,
	EFortWeaponTriggerType__Automatic = 1,
	EFortWeaponTriggerType__OnRelease = 2,
	EFortWeaponTriggerType__OnPressAndRelease = 3,
	EFortWeaponTriggerType__EFortWeaponTriggerType_MAX = 4,

};

// Enum FortniteGame.EFortJumpStaminaCost
enum class FortniteGame_EFortJumpStaminaCost : uint8_t
{
	EFortJumpStaminaCost__None     = 0,
	EFortJumpStaminaCost__Trigger  = 1,
	EFortJumpStaminaCost__SprintTrigger = 2,
	EFortJumpStaminaCost__SprintAir = 3,
	EFortJumpStaminaCost__EFortJumpStaminaCost_MAX = 4,

};

// Enum FortniteGame.EFortReportDayPhase
enum class FortniteGame_EFortReportDayPhase : uint8_t
{
	EFortReportDayPhase__Dawn      = 0,
	EFortReportDayPhase__Dusk      = 1,
	EFortReportDayPhase__ZoneFinished = 2,
	EFortReportDayPhase__EFortReportDayPhase_MAX = 3,

};

// Enum FortniteGame.EFortDayPhasePrio
enum class FortniteGame_EFortDayPhasePrio : uint8_t
{
	EFortDayPhasePrio__Default     = 0,
	EFortDayPhasePrio__DailySummary = 1,
	EFortDayPhasePrio__EFortDayPhasePrio_MAX = 2,

};

// Enum FortniteGame.EFortCustomBodyType
enum class FortniteGame_EFortCustomBodyType : uint8_t
{
	EFortCustomBodyType__Small     = 0,
	EFortCustomBodyType__Medium    = 1,
	EFortCustomBodyType__MediumAndSmall = 2,
	EFortCustomBodyType__Large     = 3,
	EFortCustomBodyType__LargeAndSmall = 4,
	EFortCustomBodyType__LargeAndMedium = 5,
	EFortCustomBodyType__All       = 6,
	EFortCustomBodyType__Deprecated = 7,
	EFortCustomBodyType__EFortCustomBodyType_MAX = 8,

};

// Enum FortniteGame.EFortDisplayGender
enum class FortniteGame_EFortDisplayGender : uint8_t
{
	EFortDisplayGender__Unknown    = 0,
	EFortDisplayGender__Male       = 1,
	EFortDisplayGender__Female     = 2,
	EFortDisplayGender__NumTypes   = 3,
	EFortDisplayGender__EFortDisplayGender_MAX = 4,

};

// Enum FortniteGame.EFortCustomGender
enum class FortniteGame_EFortCustomGender : uint8_t
{
	EFortCustomGender__Invalid     = 0,
	EFortCustomGender__Male        = 1,
	EFortCustomGender__Female      = 2,
	EFortCustomGender__Both        = 3,
	EFortCustomGender__EFortCustomGender_MAX = 4,

};

// Enum FortniteGame.EFortCompletionResult
enum class FortniteGame_EFortCompletionResult : uint8_t
{
	EFortCompletionResult__Win     = 0,
	EFortCompletionResult__Loss    = 1,
	EFortCompletionResult__Draw    = 2,
	EFortCompletionResult__Undefined = 3,
	EFortCompletionResult__EFortCompletionResult_MAX = 4,

};

// Enum FortniteGame.EFortPvPGameResult
enum class FortniteGame_EFortPvPGameResult : uint8_t
{
	EFortPvPGameResult__Win        = 0,
	EFortPvPGameResult__Loss       = 1,
	EFortPvPGameResult__Draw       = 2,
	EFortPvPGameResult__EFortPvPGameResult_MAX = 3,

};

// Enum FortniteGame.EFortItemTier
enum class FortniteGame_EFortItemTier : uint8_t
{
	EFortItemTier__No_Tier         = 0,
	EFortItemTier__I               = 1,
	EFortItemTier__II              = 2,
	EFortItemTier__III             = 3,
	EFortItemTier__IV              = 4,
	EFortItemTier__V               = 5,
	EFortItemTier__VI              = 6,
	EFortItemTier__VII             = 7,
	EFortItemTier__VIII            = 8,
	EFortItemTier__IX              = 9,
	EFortItemTier__X               = 10,
	EFortItemTier__NumItemTierValues = 11,
	EFortItemTier__EFortItemTier_MAX = 12,

};

// Enum FortniteGame.EFortQuality
enum class FortniteGame_EFortQuality : uint8_t
{
	EFortQuality__Common           = 0,
	EFortQuality__Uncommon         = 1,
	EFortQuality__Rare             = 2,
	EFortQuality__NumQualityValues = 3,
	EFortQuality__EFortQuality_MAX = 4,

};

// Enum FortniteGame.EFortRarity
enum class FortniteGame_EFortRarity : uint8_t
{
	EFortRarity__Handmade          = 0,
	EFortRarity__Ordinary          = 1,
	EFortRarity__Sturdy            = 2,
	EFortRarity__Quality           = 3,
	EFortRarity__Fine              = 4,
	EFortRarity__Elegant           = 5,
	EFortRarity__Masterwork        = 6,
	EFortRarity__Epic              = 7,
	EFortRarity__Badass            = 8,
	EFortRarity__Legendary         = 9,
	EFortRarity__NumRarityValues   = 10,
	EFortRarity__EFortRarity_MAX   = 11,

};

// Enum FortniteGame.EFortItemPropertyType
enum class FortniteGame_EFortItemPropertyType : uint8_t
{
	EFortItemPropertyType__None    = 0,
	EFortItemPropertyType__DisplayName = 1,
	EFortItemPropertyType__Damage  = 2,
	EFortItemPropertyType__EnvDamage = 3,
	EFortItemPropertyType__Reload  = 4,
	EFortItemPropertyType__HorizontalRecoil = 5,
	EFortItemPropertyType__VerticalRecoil = 6,
	EFortItemPropertyType__RateOfFire = 7,
	EFortItemPropertyType__Durability = 8,
	EFortItemPropertyType__HealthRestored = 9,
	EFortItemPropertyType__StackCount = 10,
	EFortItemPropertyType__StunTime = 11,
	EFortItemPropertyType__Uses    = 12,
	EFortItemPropertyType__Description = 13,
	EFortItemPropertyType__MagCapacity = 14,
	EFortItemPropertyType__AmmoImage = 15,
	EFortItemPropertyType__Rarity  = 16,
	EFortItemPropertyType__Personality = 17,
	EFortItemPropertyType__SetBonus = 18,
	EFortItemPropertyType__Count_AlwaysAtEnd = 19,
	EFortItemPropertyType__EFortItemPropertyType_MAX = 20,

};

// Enum FortniteGame.EFortTargetSelectionFilter
enum class FortniteGame_EFortTargetSelectionFilter : uint8_t
{
	EFortTargetSelectionFilter__Damageable = 0,
	EFortTargetSelectionFilter__Everything = 1,
	EFortTargetSelectionFilter__Pawns = 2,
	EFortTargetSelectionFilter__Buildings = 3,
	EFortTargetSelectionFilter__Walls = 4,
	EFortTargetSelectionFilter__Traps = 5,
	EFortTargetSelectionFilter__Players = 6,
	EFortTargetSelectionFilter__AIPawns = 7,
	EFortTargetSelectionFilter__Instigator = 8,
	EFortTargetSelectionFilter__WeakSpots = 9,
	EFortTargetSelectionFilter__World = 10,
	EFortTargetSelectionFilter__Max = 11,
	EFortTargetSelectionFilter__EFortTargetSelectionFilter_MAX = 12,

};

// Enum FortniteGame.EFortTargetSelectionTestType
enum class FortniteGame_EFortTargetSelectionTestType : uint8_t
{
	EFortTargetSelectionTestType__Overlap = 0,
	EFortTargetSelectionTestType__Swept = 1,
	EFortTargetSelectionTestType__Ballistic = 2,
	EFortTargetSelectionTestType__EFortTargetSelectionTestType_MAX = 3,

};

// Enum FortniteGame.EFortTargetSelectionShape
enum class FortniteGame_EFortTargetSelectionShape : uint8_t
{
	EFortTargetSelectionShape__Sphere = 0,
	EFortTargetSelectionShape__Cone = 1,
	EFortTargetSelectionShape__Box = 2,
	EFortTargetSelectionShape__Capsule = 3,
	EFortTargetSelectionShape__Line = 4,
	EFortTargetSelectionShape__Custom = 5,
	EFortTargetSelectionShape__EFortTargetSelectionShape_MAX = 6,

};

// Enum FortniteGame.EFortInventoryFilter
enum class FortniteGame_EFortInventoryFilter : uint8_t
{
	EFortInventoryFilter__WeaponMelee = 0,
	EFortInventoryFilter__WeaponRanged = 1,
	EFortInventoryFilter__Ammo     = 2,
	EFortInventoryFilter__Traps    = 3,
	EFortInventoryFilter__Consumables = 4,
	EFortInventoryFilter__Ingredients = 5,
	EFortInventoryFilter__Gadget   = 6,
	EFortInventoryFilter__Decorations = 7,
	EFortInventoryFilter__Invisible = 8,
	EFortInventoryFilter__Max_None = 9,
	EFortInventoryFilter__EFortInventoryFilter_MAX = 10,

};

// Enum FortniteGame.EFortPartialPathUsage
enum class FortniteGame_EFortPartialPathUsage : uint8_t
{
	EFortPartialPathUsage__Always  = 0,
	EFortPartialPathUsage__OnlyGoalsOnDestructible = 1,
	EFortPartialPathUsage__Never   = 2,
	EFortPartialPathUsage__EFortPartialPathUsage_MAX = 3,

};

// Enum FortniteGame.EFortHotSpotDirection
enum class FortniteGame_EFortHotSpotDirection : uint8_t
{
	EFortHotSpotDirection__PositiveX = 0,
	EFortHotSpotDirection__NegativeX = 1,
	EFortHotSpotDirection__PositiveY = 2,
	EFortHotSpotDirection__NegativeY = 3,
	EFortHotSpotDirection__PositiveZ = 4,
	EFortHotSpotDirection__NegativeZ = 5,
	EFortHotSpotDirection__Any     = 6,
	EFortHotSpotDirection__EFortHotSpotDirection_MAX = 7,

};

// Enum FortniteGame.EFortHotSpotSlot
enum class FortniteGame_EFortHotSpotSlot : uint8_t
{
	EFortHotSpotSlot__Melee        = 0,
	EFortHotSpotSlot__MeleeHuge    = 1,
	EFortHotSpotSlot__Ranged       = 2,
	EFortHotSpotSlot__None         = 3,
	EFortHotSpotSlot__EFortHotSpotSlot_MAX = 4,

};

// Enum FortniteGame.EBumpIntoSleepingReaction
enum class FortniteGame_EBumpIntoSleepingReaction : uint8_t
{
	EBumpIntoSleepingReaction__WakeUp = 0,
	EBumpIntoSleepingReaction__Ignore = 1,
	EBumpIntoSleepingReaction__Sleep = 2,
	EBumpIntoSleepingReaction__EBumpIntoSleepingReaction_MAX = 3,

};

// Enum FortniteGame.EBuildingFloorRailing
enum class FortniteGame_EBuildingFloorRailing : uint8_t
{
	EBuildingFloorRailing__None    = 0,
	EBuildingFloorRailing__Balcony = 1,
	EBuildingFloorRailing__EBuildingFloorRailing_MAX = 2,

};

// Enum FortniteGame.EBuildingStairsRailing
enum class FortniteGame_EBuildingStairsRailing : uint8_t
{
	EBuildingStairsRailing__None   = 0,
	EBuildingStairsRailing__Partial = 1,
	EBuildingStairsRailing__Full   = 2,
	EBuildingStairsRailing__EBuildingStairsRailing_MAX = 3,

};

// Enum FortniteGame.EBuildingWallArea
enum class FortniteGame_EBuildingWallArea : uint8_t
{
	EBuildingWallArea__Regular     = 0,
	EBuildingWallArea__Flat        = 1,
	EBuildingWallArea__Special     = 2,
	EBuildingWallArea__EBuildingWallArea_MAX = 3,

};

// Enum FortniteGame.EAssignmentType
enum class FortniteGame_EAssignmentType : uint8_t
{
	EAssignmentType__Invalid       = 0,
	EAssignmentType__Encounter     = 1,
	EAssignmentType__World         = 2,
	EAssignmentType__Enemy         = 3,
	EAssignmentType__NumAssignmentTypes = 4,
	EAssignmentType__EAssignmentType_MAX = 5,

};

// Enum FortniteGame.EBoundingBoxSlotDirectionCalculation
enum class FortniteGame_EBoundingBoxSlotDirectionCalculation : uint8_t
{
	EBoundingBoxSlotDirectionCalculation__Auto = 0,
	EBoundingBoxSlotDirectionCalculation__FaceWall = 1,
	EBoundingBoxSlotDirectionCalculation__FaceAwayFromWall = 2,
	EBoundingBoxSlotDirectionCalculation__FaceCenter = 3,
	EBoundingBoxSlotDirectionCalculation__EBoundingBoxSlotDirectionCalculation_MAX = 4,

};

// Enum FortniteGame.EFortSessionHelperJoinState
enum class FortniteGame_EFortSessionHelperJoinState : uint8_t
{
	EFortSessionHelperJoinState__NotJoining = 0,
	EFortSessionHelperJoinState__RequestingReservation = 1,
	EFortSessionHelperJoinState__FailedReservation = 2,
	EFortSessionHelperJoinState__WaitingOnGame = 3,
	EFortSessionHelperJoinState__AttemptingJoin = 4,
	EFortSessionHelperJoinState__JoiningSession = 5,
	EFortSessionHelperJoinState__FailedJoin = 6,
	EFortSessionHelperJoinState__EFortSessionHelperJoinState_MAX = 7,

};

// Enum FortniteGame.EFortSessionHelperJoinResult
enum class FortniteGame_EFortSessionHelperJoinResult : uint8_t
{
	EFortSessionHelperJoinResult__NoResult = 0,
	EFortSessionHelperJoinResult__ReservationSuccess = 1,
	EFortSessionHelperJoinResult__ReservationFailure = 2,
	EFortSessionHelperJoinResult__JoinSessionSuccess = 3,
	EFortSessionHelperJoinResult__JoinSessionFailure = 4,
	EFortSessionHelperJoinResult__EFortSessionHelperJoinResult_MAX = 5,

};

// Enum FortniteGame.EMatchmakingFlags
enum class FortniteGame_EMatchmakingFlags : uint8_t
{
	EMatchmakingFlags__None        = 0,
	EMatchmakingFlags__CreateNewOnly = 1,
	EMatchmakingFlags__NoReservation = 2,
	EMatchmakingFlags__Private     = 3,
	EMatchmakingFlags__UseWorldDataOwner = 4,
	EMatchmakingFlags__EMatchmakingFlags_MAX = 5,

};

// Enum FortniteGame.EMatchmakingStartLocation
enum class FortniteGame_EMatchmakingStartLocation : uint8_t
{
	EMatchmakingStartLocation__Lobby = 0,
	EMatchmakingStartLocation__Game = 1,
	EMatchmakingStartLocation__CreateNew = 2,
	EMatchmakingStartLocation__FindSingle = 3,
	EMatchmakingStartLocation__EMatchmakingStartLocation_MAX = 4,

};

// Enum FortniteGame.EFortRewardType
enum class FortniteGame_EFortRewardType : uint8_t
{
	EFortRewardType__Default       = 0,
	EFortRewardType__Missed        = 1,
	EFortRewardType__Max_None      = 2,
	EFortRewardType__EFortRewardType_MAX = 3,

};

// Enum FortniteGame.EFortRewardActivityType
enum class FortniteGame_EFortRewardActivityType : uint8_t
{
	EFortRewardActivityType__General = 0,
	EFortRewardActivityType__MissionPrimary = 1,
	EFortRewardActivityType__MissionSecondary = 2,
	EFortRewardActivityType__Campaign = 3,
	EFortRewardActivityType__AccountLevelUp = 4,
	EFortRewardActivityType__HeroLevelUp = 5,
	EFortRewardActivityType__Max_None = 6,
	EFortRewardActivityType__EFortRewardActivityType_MAX = 7,

};

// Enum FortniteGame.EFortItemEntryState
enum class FortniteGame_EFortItemEntryState : uint8_t
{
	EFortItemEntryState__NoneState = 0,
	EFortItemEntryState__NewItemCount = 1,
	EFortItemEntryState__ShouldShowItemToast = 2,
	EFortItemEntryState__DurabilityInitialized = 3,
	EFortItemEntryState__DoNotShowSpawnParticles = 4,
	EFortItemEntryState__FromRecoveredBackpack = 5,
	EFortItemEntryState__FromGift  = 6,
	EFortItemEntryState__PendingUpgradeCriteriaProgress = 7,
	EFortItemEntryState__OwnerBuildingHandle = 8,
	EFortItemEntryState__FromDroppedPickup = 9,
	EFortItemEntryState__EFortItemEntryState_MAX = 10,

};

// Enum FortniteGame.EFortWorldPrivacy
enum class FortniteGame_EFortWorldPrivacy : uint8_t
{
	EFortWorldPrivacy__Public      = 0,
	EFortWorldPrivacy__FriendsOnly = 1,
	EFortWorldPrivacy__Private     = 2,
	EFortWorldPrivacy__Max         = 3,
	EFortWorldPrivacy__EFortWorldPrivacy_MAX = 4,

};

// Enum FortniteGame.EMyFortBuildingCategory
enum class FortniteGame_EMyFortBuildingCategory : uint8_t
{
	EMyFortBuildingCategory__Training = 0,
	EMyFortBuildingCategory__Administration = 1,
	EMyFortBuildingCategory__Production = 2,
	EMyFortBuildingCategory__Fortification = 3,
	EMyFortBuildingCategory__Crafting = 4,
	EMyFortBuildingCategory__Max_None = 5,
	EMyFortBuildingCategory__EMyFortBuildingCategory_MAX = 6,

};

// Enum FortniteGame.EStatCategory
enum class FortniteGame_EStatCategory : uint8_t
{
	EStatCategory__Combat          = 0,
	EStatCategory__Building        = 1,
	EStatCategory__Utility         = 2,
	EStatCategory__EStatCategory_MAX = 3,

};

// Enum FortniteGame.EFortReplicatedStat
enum class FortniteGame_EFortReplicatedStat : uint8_t
{
	EFortReplicatedStat__MonsterKills = 0,
	EFortReplicatedStat__MonsterDamagePoints = 1,
	EFortReplicatedStat__PlayerKills = 2,
	EFortReplicatedStat__WoodGathered = 3,
	EFortReplicatedStat__StoneGathered = 4,
	EFortReplicatedStat__MetalGathered = 5,
	EFortReplicatedStat__Deaths    = 6,
	EFortReplicatedStat__BuildingsBuilt = 7,
	EFortReplicatedStat__BuildingsBuilt_Wood = 8,
	EFortReplicatedStat__BuildingsBuilt_Stone = 9,
	EFortReplicatedStat__BuildingsBuilt_Metal = 10,
	EFortReplicatedStat__BuildingsUpgraded_Wood2 = 11,
	EFortReplicatedStat__BuildingsUpgraded_Wood3 = 12,
	EFortReplicatedStat__BuildingsUpgraded_Stone2 = 13,
	EFortReplicatedStat__BuildingsUpgraded_Stone3 = 14,
	EFortReplicatedStat__BuildingsUpgraded_Metal2 = 15,
	EFortReplicatedStat__BuildingsUpgraded_Metal3 = 16,
	EFortReplicatedStat__BuildingsDestroyed = 17,
	EFortReplicatedStat__Repair_Wood = 18,
	EFortReplicatedStat__Repair_Stone = 19,
	EFortReplicatedStat__Repair_Metal = 20,
	EFortReplicatedStat__FlagsCaptured = 21,
	EFortReplicatedStat__FlagsReturned = 22,
	EFortReplicatedStat__ContainersLooted = 23,
	EFortReplicatedStat__CraftingPoints = 24,
	EFortReplicatedStat__TrapPlacementPoints = 25,
	EFortReplicatedStat__TrapActivationPoints = 26,
	EFortReplicatedStat__TotalScore = 27,
	EFortReplicatedStat__OldTotalScore = 28,
	EFortReplicatedStat__CombatScore = 29,
	EFortReplicatedStat__BuildingScore = 30,
	EFortReplicatedStat__UtilityScore = 31,
	EFortReplicatedStat__None      = 32,
	EFortReplicatedStat__MAX       = 33,
	EFortReplicatedStat__EFortReplicatedStat_MAX = 34,

};

// Enum FortniteGame.EFortReplenishmentType
enum class FortniteGame_EFortReplenishmentType : uint8_t
{
	EFortReplenishmentType__Restricted = 0,
	EFortReplenishmentType__ClampMin = 1,
	EFortReplenishmentType__Add    = 2,
	EFortReplenishmentType__Ability = 3,
	EFortReplenishmentType__EFortReplenishmentType_MAX = 4,

};

// Enum FortniteGame.EFortItemType
enum class FortniteGame_EFortItemType : uint8_t
{
	EFortItemType__WorldItem       = 0,
	EFortItemType__Ammo            = 1,
	EFortItemType__Badge           = 2,
	EFortItemType__BackpackPickup  = 3,
	EFortItemType__BuildingPiece   = 4,
	EFortItemType__CharacterPart   = 5,
	EFortItemType__Deco            = 6,
	EFortItemType__EditTool        = 7,
	EFortItemType__Food            = 8,
	EFortItemType__Gadget          = 9,
	EFortItemType__HomebaseGadget  = 10,
	EFortItemType__HeroAbility     = 11,
	EFortItemType__MissionItem     = 12,
	EFortItemType__Trap            = 13,
	EFortItemType__Weapon          = 14,
	EFortItemType__WeaponMelee     = 15,
	EFortItemType__WeaponRanged    = 16,
	EFortItemType__WeaponHarvest   = 17,
	EFortItemType__WorldResource   = 18,
	EFortItemType__Outpost         = 19,
	EFortItemType__AccountItem     = 20,
	EFortItemType__AccountResource = 21,
	EFortItemType__Alteration      = 22,
	EFortItemType__CardPack        = 23,
	EFortItemType__CharacterCosmetic = 24,
	EFortItemType__Currency        = 25,
	EFortItemType__Hero            = 26,
	EFortItemType__MyFortBuilding  = 27,
	EFortItemType__Schematic       = 28,
	EFortItemType__Ingredient      = 29,
	EFortItemType__Trait           = 30,
	EFortItemType__Worker          = 31,
	EFortItemType__Token           = 32,
	EFortItemType__HeroSpecialization = 33,
	EFortItemType__Quest           = 34,
	EFortItemType__Emote           = 35,
	EFortItemType__Stack           = 36,
	EFortItemType__Profile         = 37,
	EFortItemType__Max_None        = 38,
	EFortItemType__EFortItemType_MAX = 39,

};

// Enum FortniteGame.EFortTemplateAccess
enum class FortniteGame_EFortTemplateAccess : uint8_t
{
	EFortTemplateAccess__Normal    = 0,
	EFortTemplateAccess__Trusted   = 1,
	EFortTemplateAccess__Private   = 2,
	EFortTemplateAccess__EFortTemplateAccess_MAX = 3,
	EFortTemplateAccess__Invalid   = 4,

};

// Enum FortniteGame.ESpecializationType
enum class FortniteGame_ESpecializationType : uint8_t
{
	ESpecializationType__Tier1     = 0,
	ESpecializationType__Tier2     = 1,
	ESpecializationType__Tier3     = 2,
	ESpecializationType__Tier4     = 3,
	ESpecializationType__NumTiers  = 4,
	ESpecializationType__ESpecializationType_MAX = 5,

};

// Enum FortniteGame.EMyTown3DRoadType
enum class FortniteGame_EMyTown3DRoadType : uint8_t
{
	EMyTown3DRoadType__UnbuiltUnbuilt = 0,
	EMyTown3DRoadType__UnbuiltBuilt = 1,
	EMyTown3DRoadType__BuiltBuilt  = 2,
	EMyTown3DRoadType__EMyTown3DRoadType_MAX = 3,

};

// Enum FortniteGame.EFortQuestState
enum class FortniteGame_EFortQuestState : uint8_t
{
	EFortQuestState__Inactive      = 0,
	EFortQuestState__Active        = 1,
	EFortQuestState__Completed     = 2,
	EFortQuestState__Claimed       = 3,
	EFortQuestState__EFortQuestState_MAX = 4,

};

// Enum FortniteGame.EFortHexTileAdjacency
enum class FortniteGame_EFortHexTileAdjacency : uint8_t
{
	EFortHexTileAdjacency__North   = 0,
	EFortHexTileAdjacency__NorthEast = 1,
	EFortHexTileAdjacency__SouthEast = 2,
	EFortHexTileAdjacency__South   = 3,
	EFortHexTileAdjacency__SouthWest = 4,
	EFortHexTileAdjacency__NorthWest = 5,
	EFortHexTileAdjacency__Max_None = 6,
	EFortHexTileAdjacency__EFortHexTileAdjacency_MAX = 7,

};

// Enum FortniteGame.EFortQuickBars
enum class FortniteGame_EFortQuickBars : uint8_t
{
	EFortQuickBars__Primary        = 0,
	EFortQuickBars__Secondary      = 1,
	EFortQuickBars__Max_None       = 2,
	EFortQuickBars__EFortQuickBars_MAX = 3,

};

// Enum FortniteGame.EFortEncounterSpawnLimitType
enum class FortniteGame_EFortEncounterSpawnLimitType : uint8_t
{
	EFortEncounterSpawnLimitType__NoLimit = 0,
	EFortEncounterSpawnLimitType__NumPawnsLimit = 1,
	EFortEncounterSpawnLimitType__SpawnPointLimit = 2,
	EFortEncounterSpawnLimitType__MAX = 3,
	EFortEncounterSpawnLimitType__EFortEncounterSpawnLimitType_MAX = 4,

};

// Enum FortniteGame.EFortEncounterUtilitiesMode
enum class FortniteGame_EFortEncounterUtilitiesMode : uint8_t
{
	EFortEncounterUtilitiesMode__LockedOnly = 0,
	EFortEncounterUtilitiesMode__LockedAndFree = 1,
	EFortEncounterUtilitiesMode__EFortEncounterUtilitiesMode_MAX = 2,

};

// Enum FortniteGame.EFortEncounterSpawnLocationPlacementMode
enum class FortniteGame_EFortEncounterSpawnLocationPlacementMode : uint8_t
{
	EFortEncounterSpawnLocationPlacementMode__Directional = 0,
	EFortEncounterSpawnLocationPlacementMode__Ring = 1,
	EFortEncounterSpawnLocationPlacementMode__Volume = 2,
	EFortEncounterSpawnLocationPlacementMode__Custom = 3,
	EFortEncounterSpawnLocationPlacementMode__Max_None = 4,
	EFortEncounterSpawnLocationPlacementMode__EFortEncounterSpawnLocationPlacementMode_MAX = 5,

};

// Enum FortniteGame.EFortEncounterPacingMode
enum class FortniteGame_EFortEncounterPacingMode : uint8_t
{
	EFortEncounterPacingMode__SpawnPointsPercentageCurve = 0,
	EFortEncounterPacingMode__IntensityCurve = 1,
	EFortEncounterPacingMode__Burst = 2,
	EFortEncounterPacingMode__EFortEncounterPacingMode_MAX = 3,

};

// Enum FortniteGame.EFortTheaterType
enum class FortniteGame_EFortTheaterType : uint8_t
{
	EFortTheaterType__Standard     = 0,
	EFortTheaterType__PvP          = 1,
	EFortTheaterType__PvP2         = 2,
	EFortTheaterType__Tutorial     = 3,
	EFortTheaterType__TutorialGate = 4,
	EFortTheaterType__Test         = 5,
	EFortTheaterType__Max_None     = 6,
	EFortTheaterType__EFortTheaterType_MAX = 7,

};

// Enum FortniteGame.EFortTheaterMapTileType
enum class FortniteGame_EFortTheaterMapTileType : uint8_t
{
	EFortTheaterMapTileType__Normal = 0,
	EFortTheaterMapTileType__CriticalMission = 1,
	EFortTheaterMapTileType__AlwaysActive = 2,
	EFortTheaterMapTileType__Outpost = 3,
	EFortTheaterMapTileType__NonMission = 4,
	EFortTheaterMapTileType__EFortTheaterMapTileType_MAX = 5,

};

// Enum FortniteGame.EFortBounceType
enum class FortniteGame_EFortBounceType : uint8_t
{
	EFortBounceType__Hit           = 0,
	EFortBounceType__Interact      = 1,
	EFortBounceType__EditPlaced    = 2,
	EFortBounceType__EFortBounceType_MAX = 3,

};

// Enum FortniteGame.EBuildingHighlightType
enum class FortniteGame_EBuildingHighlightType : uint8_t
{
	EBuildingHighlightType__Primary = 0,
	EBuildingHighlightType__Interact = 1,
	EBuildingHighlightType__WillBeDestroyed = 2,
	EBuildingHighlightType__MAX    = 3,
	EBuildingHighlightType__EBuildingHighlightType_MAX = 4,

};

// Enum FortniteGame.EFortConnectivityCubeFace
enum class FortniteGame_EFortConnectivityCubeFace : uint8_t
{
	EFortConnectivityCubeFace__Front = 0,
	EFortConnectivityCubeFace__Left = 1,
	EFortConnectivityCubeFace__Back = 2,
	EFortConnectivityCubeFace__Right = 3,
	EFortConnectivityCubeFace__Upper = 4,
	EFortConnectivityCubeFace__Lower = 5,
	EFortConnectivityCubeFace__MAX = 6,
	EFortConnectivityCubeFace__EFortConnectivityCubeFace_MAX = 7,

};

// Enum FortniteGame.EFortDecoPlacementQueryResults
enum class FortniteGame_EFortDecoPlacementQueryResults : uint8_t
{
	EFortDecoPlacementQueryResults__CanAdd = 0,
	EFortDecoPlacementQueryResults__ExistingTrap = 1,
	EFortDecoPlacementQueryResults__ExistingObject = 2,
	EFortDecoPlacementQueryResults__Obstructed = 3,
	EFortDecoPlacementQueryResults__NoLocation = 4,
	EFortDecoPlacementQueryResults__WrongType = 5,
	EFortDecoPlacementQueryResults__WrongShape = 6,
	EFortDecoPlacementQueryResults__BeingModified = 7,
	EFortDecoPlacementQueryResults__WrongTeam = 8,
	EFortDecoPlacementQueryResults__BlueprintFailure = 9,
	EFortDecoPlacementQueryResults__AbilityFailure = 10,
	EFortDecoPlacementQueryResults__RequiresPlayerBuildableActor = 11,
	EFortDecoPlacementQueryResults__EFortDecoPlacementQueryResults_MAX = 12,

};

// Enum FortniteGame.EFortStructuralGridQueryResults
enum class FortniteGame_EFortStructuralGridQueryResults : uint8_t
{
	EFortStructuralGridQueryResults__CanAdd = 0,
	EFortStructuralGridQueryResults__ExistingActor = 1,
	EFortStructuralGridQueryResults__Obstructed = 2,
	EFortStructuralGridQueryResults__NoStructuralSupport = 3,
	EFortStructuralGridQueryResults__InvalidActor = 4,
	EFortStructuralGridQueryResults__ReachedLimit = 5,
	EFortStructuralGridQueryResults__EFortStructuralGridQueryResults_MAX = 6,

};

// Enum FortniteGame.EFortCostInfoTypes
enum class FortniteGame_EFortCostInfoTypes : uint8_t
{
	EFortCostInfoTypes__Placement  = 0,
	EFortCostInfoTypes__Repair     = 1,
	EFortCostInfoTypes__Conversion = 2,
	EFortCostInfoTypes__Ability    = 3,
	EFortCostInfoTypes__None       = 4,
	EFortCostInfoTypes__EFortCostInfoTypes_MAX = 5,

};

// Enum FortniteGame.EFortBuildingInitializationReason
enum class FortniteGame_EFortBuildingInitializationReason : uint8_t
{
	EFortBuildingInitializationReason__StaticallyPlaced = 0,
	EFortBuildingInitializationReason__Spawned = 1,
	EFortBuildingInitializationReason__Replaced = 2,
	EFortBuildingInitializationReason__LoadedFromSave = 3,
	EFortBuildingInitializationReason__DynamicBuilderPlaced = 4,
	EFortBuildingInitializationReason__PlacementTool = 5,
	EFortBuildingInitializationReason__TrapTool = 6,
	EFortBuildingInitializationReason__None = 7,
	EFortBuildingInitializationReason__EFortBuildingInitializationReason_MAX = 8,

};

// Enum FortniteGame.EFortBuildingPersistentState
enum class FortniteGame_EFortBuildingPersistentState : uint8_t
{
	EFortBuildingPersistentState__Default = 0,
	EFortBuildingPersistentState__New = 1,
	EFortBuildingPersistentState__Constructed = 2,
	EFortBuildingPersistentState__Destroyed = 3,
	EFortBuildingPersistentState__Searched = 4,
	EFortBuildingPersistentState__None = 5,
	EFortBuildingPersistentState__EFortBuildingPersistentState_MAX = 6,

};

// Enum FortniteGame.EFortBuildingState
enum class FortniteGame_EFortBuildingState : uint8_t
{
	EFortBuildingState__Placement  = 0,
	EFortBuildingState__EditMode   = 1,
	EFortBuildingState__None       = 2,
	EFortBuildingState__EFortBuildingState_MAX = 3,

};

// Enum FortniteGame.EFortResourceLevel
enum class FortniteGame_EFortResourceLevel : uint8_t
{
	EFortResourceLevel__First      = 0,
	EFortResourceLevel__Second     = 1,
	EFortResourceLevel__Third      = 2,
	EFortResourceLevel__Fourth     = 3,
	EFortResourceLevel__Fifth      = 4,
	EFortResourceLevel__Sixth      = 5,
	EFortResourceLevel__NumLevels  = 6,
	EFortResourceLevel__Invalid    = 7,
	EFortResourceLevel__EFortResourceLevel_MAX = 8,

};

// Enum FortniteGame.EFortResourceType
enum class FortniteGame_EFortResourceType : uint8_t
{
	EFortResourceType__Wood        = 0,
	EFortResourceType__Stone       = 1,
	EFortResourceType__Metal       = 2,
	EFortResourceType__Permanite   = 3,
	EFortResourceType__None        = 4,
	EFortResourceType__EFortResourceType_MAX = 5,

};

// Enum FortniteGame.EFortTextureDataSlot
enum class FortniteGame_EFortTextureDataSlot : uint8_t
{
	EFortTextureDataSlot__Primary  = 0,
	EFortTextureDataSlot__Secondary = 1,
	EFortTextureDataSlot__Tertiary = 2,
	EFortTextureDataSlot__Fourth   = 3,
	EFortTextureDataSlot__NumSlots = 4,
	EFortTextureDataSlot__EFortTextureDataSlot_MAX = 5,

};

// Enum FortniteGame.EFortTextureDataType
enum class FortniteGame_EFortTextureDataType : uint8_t
{
	EFortTextureDataType__Any      = 0,
	EFortTextureDataType__OuterWall = 1,
	EFortTextureDataType__InnerWall = 2,
	EFortTextureDataType__Corner   = 3,
	EFortTextureDataType__Floor    = 4,
	EFortTextureDataType__Ceiling  = 5,
	EFortTextureDataType__Trim     = 6,
	EFortTextureDataType__Roof     = 7,
	EFortTextureDataType__Pillar   = 8,
	EFortTextureDataType__Shingle  = 9,
	EFortTextureDataType__None     = 10,
	EFortTextureDataType__EFortTextureDataType_MAX = 11,

};

// Enum FortniteGame.EFortBuildingType
enum class FortniteGame_EFortBuildingType : uint8_t
{
	EFortBuildingType__Wall        = 0,
	EFortBuildingType__Floor       = 1,
	EFortBuildingType__Corner      = 2,
	EFortBuildingType__Deco        = 3,
	EFortBuildingType__Prop        = 4,
	EFortBuildingType__Stairs      = 5,
	EFortBuildingType__Roof        = 6,
	EFortBuildingType__Pillar      = 7,
	EFortBuildingType__SpawnedItem = 8,
	EFortBuildingType__Container   = 9,
	EFortBuildingType__Trap        = 10,
	EFortBuildingType__GenericCenterCellActor = 11,
	EFortBuildingType__None        = 12,
	EFortBuildingType__EFortBuildingType_MAX = 13,

};

// Enum FortniteGame.EFortMissionType
enum class FortniteGame_EFortMissionType : uint8_t
{
	EFortMissionType__Primary      = 0,
	EFortMissionType__Secondary    = 1,
	EFortMissionType__Max_None     = 2,
	EFortMissionType__EFortMissionType_MAX = 3,

};

// Enum FortniteGame.EFortObjectiveRequirement
enum class FortniteGame_EFortObjectiveRequirement : uint8_t
{
	EFortObjectiveRequirement__Optional = 0,
	EFortObjectiveRequirement__Required = 1,
	EFortObjectiveRequirement__EFortObjectiveRequirement_MAX = 2,

};

// Enum FortniteGame.EFortMissionStatus
enum class FortniteGame_EFortMissionStatus : uint8_t
{
	EFortMissionStatus__Created    = 0,
	EFortMissionStatus__InProgress = 1,
	EFortMissionStatus__Succeeded  = 2,
	EFortMissionStatus__Failed     = 3,
	EFortMissionStatus__NeutralCompletion = 4,
	EFortMissionStatus__Max_None   = 5,
	EFortMissionStatus__EFortMissionStatus_MAX = 6,

};

// Enum FortniteGame.EFortObjectiveStatus
enum class FortniteGame_EFortObjectiveStatus : uint8_t
{
	EFortObjectiveStatus__Created  = 0,
	EFortObjectiveStatus__InProgress = 1,
	EFortObjectiveStatus__Succeeded = 2,
	EFortObjectiveStatus__Failed   = 3,
	EFortObjectiveStatus__NeutralCompletion = 4,
	EFortObjectiveStatus__Max_None = 5,
	EFortObjectiveStatus__EFortObjectiveStatus_MAX = 6,

};

// Enum FortniteGame.EMissionGenerationCategory
enum class FortniteGame_EMissionGenerationCategory : uint8_t
{
	EMissionGenerationCategory__Primary = 0,
	EMissionGenerationCategory__Secondary = 1,
	EMissionGenerationCategory__Tertiary = 2,
	EMissionGenerationCategory__Max_None = 3,
	EMissionGenerationCategory__EMissionGenerationCategory_MAX = 4,

};

// Enum FortniteGame.EFortObjectLibrary
enum class FortniteGame_EFortObjectLibrary : uint8_t
{
	EFortObjectLibrary__PlayerBuildingClass = 0,
	EFortObjectLibrary__BuildingTexture = 1,
	EFortObjectLibrary__NavAgentCost = 2,
	EFortObjectLibrary__Missions   = 3,
	EFortObjectLibrary__MissionInfo = 4,
	EFortObjectLibrary__MissionManagers = 5,
	EFortObjectLibrary__MissionGenerators = 6,
	EFortObjectLibrary__SpawnGroup = 7,
	EFortObjectLibrary__CharacterPart = 8,
	EFortObjectLibrary__ColorSwatch = 9,
	EFortObjectLibrary__EnemyMutators = 10,
	EFortObjectLibrary__WeaponData = 11,
	EFortObjectLibrary__AmmoData   = 12,
	EFortObjectLibrary__EmoteData  = 13,
	EFortObjectLibrary__ConsumableData = 14,
	EFortObjectLibrary__SchematicData = 15,
	EFortObjectLibrary__IngredientData = 16,
	EFortObjectLibrary__PersistentResourceData = 17,
	EFortObjectLibrary__GadgetData = 18,
	EFortObjectLibrary__TrapData   = 19,
	EFortObjectLibrary__TraitData  = 20,
	EFortObjectLibrary__HeroTypeData = 21,
	EFortObjectLibrary__WorkerTypeData = 22,
	EFortObjectLibrary__TokenTypeData = 23,
	EFortObjectLibrary__TownBuildingData = 24,
	EFortObjectLibrary__CurrencyData = 25,
	EFortObjectLibrary__AlterationData = 26,
	EFortObjectLibrary__CharacterCosmeticData = 27,
	EFortObjectLibrary__DecoData   = 28,
	EFortObjectLibrary__CardPackData = 29,
	EFortObjectLibrary__WorldItems = 30,
	EFortObjectLibrary__HeroSpecializationData = 31,
	EFortObjectLibrary__QuestData  = 32,
	EFortObjectLibrary__OutpostData = 33,
	EFortObjectLibrary__Max_None   = 34,
	EFortObjectLibrary__EFortObjectLibrary_MAX = 35,

};

// Enum FortniteGame.EFortOptionGenerationResult
enum class FortniteGame_EFortOptionGenerationResult : uint8_t
{
	EFortOptionGenerationResult__NoOptionsGenerated = 0,
	EFortOptionGenerationResult__NewOptionsGenerated = 1,
	EFortOptionGenerationResult__ExistingOptionsGenerated = 2,
	EFortOptionGenerationResult__EFortOptionGenerationResult_MAX = 3,

};

// Enum FortniteGame.EWorldOnlineState
enum class FortniteGame_EWorldOnlineState : uint8_t
{
	EWorldOnlineState__Offline     = 0,
	EWorldOnlineState__Online      = 1,
	EWorldOnlineState__EWorldOnlineState_MAX = 2,

};

// Enum FortniteGame.TInteractionType
enum class FortniteGame_ETInteractionType : uint8_t
{
	IT_NoInteraction               = 0,
	IT_Simple                      = 1,
	IT_LongPress                   = 2,
	IT_BuildingEdit                = 3,
	IT_BuildingImprovement         = 4,
	IT_MAX                         = 5,

};

// Enum FortniteGame.EFortFeedbackBroadcastFilter
enum class FortniteGame_EFortFeedbackBroadcastFilter : uint8_t
{
	FFBF_Speaker                   = 0,
	FFBF_SpeakerTeam               = 1,
	FFBF_SpeakerAdressee           = 2,
	FFBF_HumanPvP_Team1            = 3,
	FFBF_HumanPvP_Team2            = 4,
	FFBF_None_Max                  = 5,
	FFBF_MAX                       = 6,

};

// Enum FortniteGame.EFortFeedbackSelectionMethod
enum class FortniteGame_EFortFeedbackSelectionMethod : uint8_t
{
	FFSM_Instigator                = 0,
	FFSM_Recipient                 = 1,
	FFSM_TeamWitness               = 2,
	FFSM_EnemyWitness              = 3,
	FFSM_Random                    = 4,
	FFSM_Priority_IRTE             = 5,
	FFSM_AllPawns                  = 6,
	FFSM_Announcer                 = 7,
	FFSM_MAX                       = 8,

};

// Enum FortniteGame.EFortFeedbackAddressee
enum class FortniteGame_EFortFeedbackAddressee : uint8_t
{
	FFA_Instigator                 = 0,
	FFA_Recipient                  = 1,
	FFA_All                        = 2,
	FFA_MAX                        = 3,

};

// Enum FortniteGame.EFortFeedbackContext
enum class FortniteGame_EFortFeedbackContext : uint8_t
{
	FFC_Instigator                 = 0,
	FFC_Recipient                  = 1,
	FFC_TeamWitness                = 2,
	FFC_EnemyWitness               = 3,
	FFC_AllPawns                   = 4,
	FFC_Announcer                  = 5,
	FFC_None_Max                   = 6,
	FFC_MAX                        = 7,

};

// Enum FortniteGame.EFortMiniMapIconRotation
enum class FortniteGame_EFortMiniMapIconRotation : uint8_t
{
	EFMMIR_None                    = 0,
	EFMMIR_Absolute                = 1,
	EFMMIR_Relative                = 2,
	EFMMIR_MAX                     = 3,

};

// Enum FortniteGame.EFortMiniMapContext
enum class FortniteGame_EFortMiniMapContext : uint8_t
{
	EFMC_MiniMap                   = 0,
	EFMC_FullScreenMap             = 1,
	EFMC_MAX                       = 2,

};

// Enum FortniteGame.EFortMiniMapHeight
enum class FortniteGame_EFortMiniMapHeight : uint8_t
{
	EFMH_Equal                     = 0,
	EFMH_Below                     = 1,
	EFMH_Above                     = 2,
	EFMH_MAX                       = 3,

};

// Enum FortniteGame.EFortPIDValueGraphElements
enum class FortniteGame_EFortPIDValueGraphElements : uint8_t
{
	EFortPIDValueGraphElements__Proportional = 0,
	EFortPIDValueGraphElements__Integral = 1,
	EFortPIDValueGraphElements__Max_None = 2,
	EFortPIDValueGraphElements__EFortPIDValueGraphElements_MAX = 3,

};

// Enum FortniteGame.EFortIntensityGraphElements
enum class FortniteGame_EFortIntensityGraphElements : uint8_t
{
	EFortIntensityGraphElements__ActualIntensity = 0,
	EFortIntensityGraphElements__DesiredIntensity = 1,
	EFortIntensityGraphElements__Max_None = 2,
	EFortIntensityGraphElements__EFortIntensityGraphElements_MAX = 3,

};

// Enum FortniteGame.EFortContributionGraphElements
enum class FortniteGame_EFortContributionGraphElements : uint8_t
{
	EFortContributionGraphElements__ProportionalLine = 0,
	EFortContributionGraphElements__IntegralLine = 1,
	EFortContributionGraphElements__TotalLine = 2,
	EFortContributionGraphElements__PendingLine = 3,
	EFortContributionGraphElements__ActionLine = 4,
	EFortContributionGraphElements__Max_None = 5,
	EFortContributionGraphElements__EFortContributionGraphElements_MAX = 6,

};

// Enum FortniteGame.EFortFactorContributionType
enum class FortniteGame_EFortFactorContributionType : uint8_t
{
	EFortFactorContributionType__CurrentValue_Direct = 0,
	EFortFactorContributionType__CurrentValue_Inverse = 1,
	EFortFactorContributionType__AverageValue_Direct = 2,
	EFortFactorContributionType__AverageValue_Inverse = 3,
	EFortFactorContributionType__EFortFactorContributionType_MAX = 4,

};

// Enum FortniteGame.EFortAIDirectorFactor
enum class FortniteGame_EFortAIDirectorFactor : uint8_t
{
	EFortAIDirectorFactor__PlayerDamageThreat = 0,
	EFortAIDirectorFactor__ObjectiveDamageThreat = 1,
	EFortAIDirectorFactor__ObjectivePathCost = 2,
	EFortAIDirectorFactor__PlayerPathCost = 3,
	EFortAIDirectorFactor__PlayerMovement = 4,
	EFortAIDirectorFactor__TrapsEffective = 5,
	EFortAIDirectorFactor__PlayerWander = 6,
	EFortAIDirectorFactor__NearbyEnemyPresence = 7,
	EFortAIDirectorFactor__OffensiveResources = 8,
	EFortAIDirectorFactor__DefensiveResources = 9,
	EFortAIDirectorFactor__Boredom = 10,
	EFortAIDirectorFactor__ArtilleryVulnerability = 11,
	EFortAIDirectorFactor__Max_None = 12,
	EFortAIDirectorFactor__EFortAIDirectorFactor_MAX = 13,

};

// Enum FortniteGame.EFortCombatFactors
enum class FortniteGame_EFortCombatFactors : uint8_t
{
	EFortCombatFactors__PlayerDamageThreat = 0,
	EFortCombatFactors__ObjectiveDamageThreat = 1,
	EFortCombatFactors__ObjectivePathCost = 2,
	EFortCombatFactors__PlayerPathCost = 3,
	EFortCombatFactors__PlayerMovement = 4,
	EFortCombatFactors__TrapsEffective = 5,
	EFortCombatFactors__PlayerWander = 6,
	EFortCombatFactors__NearbyEnemyPresence = 7,
	EFortCombatFactors__OffensiveResources = 8,
	EFortCombatFactors__DefensiveResources = 9,
	EFortCombatFactors__Boredom    = 10,
	EFortCombatFactors__ArtilleryVulnerability = 11,
	EFortCombatFactors__Max_None   = 12,
	EFortCombatFactors__EFortCombatFactors_MAX = 13,

};

// Enum FortniteGame.EFortCombatEvents
enum class FortniteGame_EFortCombatEvents : uint8_t
{
	EFortCombatEvents__HuskFollowing = 0,
	EFortCombatEvents__SmasherFollowing = 1,
	EFortCombatEvents__TrollFollowing = 2,
	EFortCombatEvents__TakerFollowing = 3,
	EFortCombatEvents__PlayerTakeDamage = 4,
	EFortCombatEvents__PlayerHealth = 5,
	EFortCombatEvents__PlayerLookAtEnemy = 6,
	EFortCombatEvents__PlayerDamageEnemy = 7,
	EFortCombatEvents__PlayerKilledEnemy = 8,
	EFortCombatEvents__AtlasTakeDamage = 9,
	EFortCombatEvents__AtlasHealth = 10,
	EFortCombatEvents__AtlasDestroyed = 11,
	EFortCombatEvents__TrapFiring  = 12,
	EFortCombatEvents__BuildingTakeDamage = 13,
	EFortCombatEvents__FoodHealingPotential = 14,
	EFortCombatEvents__PlayerAmmo  = 15,
	EFortCombatEvents__EnemiesNear = 16,
	EFortCombatEvents__PlayerMovement = 17,
	EFortCombatEvents__BuildingDamagedNearObjective = 18,
	EFortCombatEvents__TrapDamageEnemy = 19,
	EFortCombatEvents__ObjectivePathCost = 20,
	EFortCombatEvents__PlayerPathCost = 21,
	EFortCombatEvents__Max_None    = 22,
	EFortCombatEvents__EFortCombatEvents_MAX = 23,

};

// Enum FortniteGame.EFortAIDirectorEventParticipant
enum class FortniteGame_EFortAIDirectorEventParticipant : uint8_t
{
	EFortAIDirectorEventParticipant__Target = 0,
	EFortAIDirectorEventParticipant__Source = 1,
	EFortAIDirectorEventParticipant__Either = 2,
	EFortAIDirectorEventParticipant__Max_None = 3,
	EFortAIDirectorEventParticipant__EFortAIDirectorEventParticipant_MAX = 4,

};

// Enum FortniteGame.EFortCombatThresholds
enum class FortniteGame_EFortCombatThresholds : uint8_t
{
	EFortCombatThresholds__Low     = 0,
	EFortCombatThresholds__Medium  = 1,
	EFortCombatThresholds__High    = 2,
	EFortCombatThresholds__Extreme = 3,
	EFortCombatThresholds__Max_None = 4,
	EFortCombatThresholds__EFortCombatThresholds_MAX = 5,

};

// Enum FortniteGame.EFortElementalDamageType
enum class FortniteGame_EFortElementalDamageType : uint8_t
{
	EFortElementalDamageType__None = 0,
	EFortElementalDamageType__Fire = 1,
	EFortElementalDamageType__Ice  = 2,
	EFortElementalDamageType__Lightning = 3,
	EFortElementalDamageType__MAX  = 4,
	EFortElementalDamageType__EFortElementalDamageType_MAX = 5,

};

// Enum FortniteGame.EFortDamageZone
enum class FortniteGame_EFortDamageZone : uint8_t
{
	EFortDamageZone__Light         = 0,
	EFortDamageZone__Normal        = 1,
	EFortDamageZone__Critical      = 2,
	EFortDamageZone__Vulnerability = 3,
	EFortDamageZone__Max           = 4,
	EFortDamageZone__EFortDamageZone_MAX = 5,

};

// Enum FortniteGame.EFortBaseWeaponDamage
enum class FortniteGame_EFortBaseWeaponDamage : uint8_t
{
	EFortBaseWeaponDamage__Combat  = 0,
	EFortBaseWeaponDamage__Environmental = 1,
	EFortBaseWeaponDamage__EFortBaseWeaponDamage_MAX = 2,

};

// Enum FortniteGame.EFortWeaponCoreAnimation
enum class FortniteGame_EFortWeaponCoreAnimation : uint8_t
{
	EFortWeaponCoreAnimation__Melee = 0,
	EFortWeaponCoreAnimation__Pistol = 1,
	EFortWeaponCoreAnimation__Shotgun = 2,
	EFortWeaponCoreAnimation__PaperBlueprint = 3,
	EFortWeaponCoreAnimation__Rifle = 4,
	EFortWeaponCoreAnimation__MeleeOneHand = 5,
	EFortWeaponCoreAnimation__MachinePistol = 6,
	EFortWeaponCoreAnimation__RocketLauncher = 7,
	EFortWeaponCoreAnimation__GrenadeLauncher = 8,
	EFortWeaponCoreAnimation__GoingCommando = 9,
	EFortWeaponCoreAnimation__AssaultRifle = 10,
	EFortWeaponCoreAnimation__TacticalShotgun = 11,
	EFortWeaponCoreAnimation__SniperRifle = 12,
	EFortWeaponCoreAnimation__TrapPlacement = 13,
	EFortWeaponCoreAnimation__EFortWeaponCoreAnimation_MAX = 14,

};

// Enum FortniteGame.EFortReloadFXState
enum class FortniteGame_EFortReloadFXState : uint8_t
{
	EFortReloadFXState__ReloadStart = 0,
	EFortReloadFXState__ReloadCartridge = 1,
	EFortReloadFXState__ReloadEnd  = 2,
	EFortReloadFXState__Max_None   = 3,
	EFortReloadFXState__EFortReloadFXState_MAX = 4,

};

// Enum FortniteGame.EFortWeaponSoundState
enum class FortniteGame_EFortWeaponSoundState : uint8_t
{
	EFortWeaponSoundState__Normal  = 0,
	EFortWeaponSoundState__LowAmmo = 1,
	EFortWeaponSoundState__Degraded = 2,
	EFortWeaponSoundState__Max_None = 3,
	EFortWeaponSoundState__EFortWeaponSoundState_MAX = 4,

};

// Enum FortniteGame.EFortMontageInputType
enum class FortniteGame_EFortMontageInputType : uint8_t
{
	EFortMontageInputType__WindowClickOrHold = 0,
	EFortMontageInputType__WindowHoldOnly = 1,
	EFortMontageInputType__InstantClick = 2,
	EFortMontageInputType__EFortMontageInputType_MAX = 3,

};

// Enum FortniteGame.EFortAbilitySourceType
enum class FortniteGame_EFortAbilitySourceType : uint8_t
{
	EFortAbilitySourceType__Unknown = 0,
	EFortAbilitySourceType__Weapon = 1,
	EFortAbilitySourceType__Gadget = 2,
	EFortAbilitySourceType__Pawn   = 3,
	EFortAbilitySourceType__Building = 4,
	EFortAbilitySourceType__HomeBase = 5,
	EFortAbilitySourceType__EFortAbilitySourceType_MAX = 6,

};

// Enum FortniteGame.EFortAbilityTargetingSource
enum class FortniteGame_EFortAbilityTargetingSource : uint8_t
{
	EFortAbilityTargetingSource__Camera = 0,
	EFortAbilityTargetingSource__PawnForward = 1,
	EFortAbilityTargetingSource__PawnTowardsFocus = 2,
	EFortAbilityTargetingSource__WeaponForward = 3,
	EFortAbilityTargetingSource__WeaponTowardsFocus = 4,
	EFortAbilityTargetingSource__Custom = 5,
	EFortAbilityTargetingSource__Max_None = 6,
	EFortAbilityTargetingSource__EFortAbilityTargetingSource_MAX = 7,

};

// Enum FortniteGame.EFortAmmoType
enum class FortniteGame_EFortAmmoType : uint8_t
{
	EFortAmmoType__Pistol          = 0,
	EFortAmmoType__Shotgun         = 1,
	EFortAmmoType__Assault         = 2,
	EFortAmmoType__Sniper          = 3,
	EFortAmmoType__Energy          = 4,
	EFortAmmoType__EFortAmmoType_MAX = 5,

};

// Enum FortniteGame.EFortPawnStasisMode
enum class FortniteGame_EFortPawnStasisMode : uint8_t
{
	EFortPawnStasisMode__None      = 0,
	EFortPawnStasisMode__NoMovement = 1,
	EFortPawnStasisMode__NoMovementOrTurning = 2,
	EFortPawnStasisMode__EFortPawnStasisMode_MAX = 3,

};

// Enum FortniteGame.EFortNameValidationResult
enum class FortniteGame_EFortNameValidationResult : uint8_t
{
	EFortNameValidationResult__Valid = 0,
	EFortNameValidationResult__TooShort = 1,
	EFortNameValidationResult__TooLong = 2,
	EFortNameValidationResult__IllegalCharacter = 3,
	EFortNameValidationResult__EFortNameValidationResult_MAX = 4,

};

// Enum FortniteGame.EFortProximityBasedGEApplicationType
enum class FortniteGame_EFortProximityBasedGEApplicationType : uint8_t
{
	EFortProximityBasedGEApplicationType__ApplyOnProximityPulse = 0,
	EFortProximityBasedGEApplicationType__ApplyOnProximityTouch = 1,
	EFortProximityBasedGEApplicationType__ApplyOnlyDuringProximityTouch = 2,
	EFortProximityBasedGEApplicationType__EFortProximityBasedGEApplicationType_MAX = 3,

};

// Enum FortniteGame.ENavigationObstacleOverride
enum class FortniteGame_ENavigationObstacleOverride : uint8_t
{
	ENavigationObstacleOverride__UseMeshSettings = 0,
	ENavigationObstacleOverride__ForceEnabled = 1,
	ENavigationObstacleOverride__ForceDisabled = 2,
	ENavigationObstacleOverride__ENavigationObstacleOverride_MAX = 3,

};

// Enum FortniteGame.EDynamicBuildingPlacementType
enum class FortniteGame_EDynamicBuildingPlacementType : uint8_t
{
	EDynamicBuildingPlacementType__CountsTowardsBounds = 0,
	EDynamicBuildingPlacementType__DestroyIfColliding = 1,
	EDynamicBuildingPlacementType__DestroyAnythingThatCollides = 2,
	EDynamicBuildingPlacementType__EDynamicBuildingPlacementType_MAX = 3,

};

// Enum FortniteGame.EUnlockRules
enum class FortniteGame_EUnlockRules : uint8_t
{
	EUnlockRules__UR_Reset         = 0,
	EUnlockRules__UR_MaintainState = 1,
	EUnlockRules__UR_ResetDeactivate = 2,
	EUnlockRules__UR_MAX           = 3,

};

// Enum FortniteGame.EContentionRules
enum class FortniteGame_EContentionRules : uint8_t
{
	EContentionRules__CR_MajorityWins = 0,
	EContentionRules__CR_OneTeamOnlyWins = 1,
	EContentionRules__CR_MAX       = 2,

};

// Enum FortniteGame.EFortItemCollectorBehavior
enum class FortniteGame_EFortItemCollectorBehavior : uint8_t
{
	EFortItemCollectorBehavior__FirstToGoal = 0,
	EFortItemCollectorBehavior__FreeForAll = 1,
	EFortItemCollectorBehavior__TugOfWar = 2,
	EFortItemCollectorBehavior__EFortItemCollectorBehavior_MAX = 3,

};

// Enum FortniteGame.EFortItemCollectorState
enum class FortniteGame_EFortItemCollectorState : uint8_t
{
	EFortItemCollectorState__CanInteract = 0,
	EFortItemCollectorState__Active = 1,
	EFortItemCollectorState__Inactive = 2,
	EFortItemCollectorState__Captured = 3,
	EFortItemCollectorState__Invalid = 4,
	EFortItemCollectorState__EFortItemCollectorState_MAX = 5,

};

// Enum FortniteGame.EFortStrategicBuildingLevelCriteriaDisplayRepresentation
enum class FortniteGame_EFortStrategicBuildingLevelCriteriaDisplayRepresentation : uint8_t
{
	EFortStrategicBuildingLevelCriteriaDisplayRepresentation__Integer = 0,
	EFortStrategicBuildingLevelCriteriaDisplayRepresentation__Float = 1,
	EFortStrategicBuildingLevelCriteriaDisplayRepresentation__EFortStrategicBuildingLevelCriteriaDisplayRepresentation_MAX = 2,

};

// Enum FortniteGame.EFortStrategicBuildingCategory
enum class FortniteGame_EFortStrategicBuildingCategory : uint8_t
{
	EFortStrategicBuildingCategory__Defensive = 0,
	EFortStrategicBuildingCategory__Offensive = 1,
	EFortStrategicBuildingCategory__Utility = 2,
	EFortStrategicBuildingCategory__EFortStrategicBuildingCategory_MAX = 3,

};

// Enum FortniteGame.EFortRiftSlotStatus
enum class FortniteGame_EFortRiftSlotStatus : uint8_t
{
	EFortRiftSlotStatus__Reserved  = 0,
	EFortRiftSlotStatus__Occupied  = 1,
	EFortRiftSlotStatus__Max_None  = 2,
	EFortRiftSlotStatus__EFortRiftSlotStatus_MAX = 3,

};

// Enum FortniteGame.EBuildingNavObstacleType
enum class FortniteGame_EBuildingNavObstacleType : uint8_t
{
	EBuildingNavObstacleType__UnwalkableAll = 0,
	EBuildingNavObstacleType__UnwalkableHuskOnly = 1,
	EBuildingNavObstacleType__SmashWhenLowHeight = 2,
	EBuildingNavObstacleType__SmashAll = 3,
	EBuildingNavObstacleType__EBuildingNavObstacleType_MAX = 4,

};

// Enum FortniteGame.EBuildingReplacementType
enum class FortniteGame_EBuildingReplacementType : uint8_t
{
	BRT_None                       = 0,
	BRT_Edited                     = 1,
	BRT_Conversion                 = 2,
	BRT_MAX                        = 3,

};

// Enum FortniteGame.EPlacementType
enum class FortniteGame_EPlacementType : uint8_t
{
	EPlacementType__Free           = 0,
	EPlacementType__Grid           = 1,
	EPlacementType__None           = 2,
	EPlacementType__EPlacementType_MAX = 3,

};

// Enum FortniteGame.EBuildingAttachmentType
enum class FortniteGame_EBuildingAttachmentType : uint8_t
{
	ATTACH_Floor                   = 0,
	ATTACH_Wall                    = 1,
	ATTACH_Ceiling                 = 2,
	ATTACH_Corner                  = 3,
	ATTACH_All                     = 4,
	ATTACH_WallThenFloor           = 5,
	ATTACH_None                    = 6,
	ATTACH_MAX                     = 7,

};

// Enum FortniteGame.EBuildingAttachmentSlot
enum class FortniteGame_EBuildingAttachmentSlot : uint8_t
{
	SLOT_Floor                     = 0,
	SLOT_Wall                      = 1,
	SLOT_Ceiling                   = 2,
	SLOT_None                      = 3,
	SLOT_MAX                       = 4,

};

// Enum FortniteGame.EBuildingAnim
enum class FortniteGame_EBuildingAnim : uint8_t
{
	EBA_None                       = 0,
	EBA_Building                   = 1,
	EBA_Breaking                   = 2,
	EBA_Destruction                = 3,
	EBA_Placement                  = 4,
	EBA_BuildingCheat              = 5,
	EBA_LODEffect                  = 6,
	EBA_MAX                        = 7,

};

// Enum FortniteGame.ELootQuotaLevel
enum class FortniteGame_ELootQuotaLevel : uint8_t
{
	ELootQuotaLevel__Unlimited     = 0,
	ELootQuotaLevel__Level1        = 1,
	ELootQuotaLevel__Level2        = 2,
	ELootQuotaLevel__Level3        = 3,
	ELootQuotaLevel__Level4        = 4,
	ELootQuotaLevel__Level5        = 5,
	ELootQuotaLevel__Level6        = 6,
	ELootQuotaLevel__Level7        = 7,
	ELootQuotaLevel__NumLevels     = 8,
	ELootQuotaLevel__ELootQuotaLevel_MAX = 9,

};

// Enum FortniteGame.EBuildingFoundationType
enum class FortniteGame_EBuildingFoundationType : uint8_t
{
	BFT_3x3                        = 0,
	BFT_5x5                        = 1,
	BFT_5x10                       = 2,
	BFT_None                       = 3,
	BFT_MAX                        = 4,

};

// Enum FortniteGame.ETrackVerticality
enum class FortniteGame_ETrackVerticality : uint8_t
{
	ETrackVerticality__Floor       = 0,
	ETrackVerticality__Stair       = 1,
	ETrackVerticality__Max_None    = 2,
	ETrackVerticality__ETrackVerticality_MAX = 3,

};

// Enum FortniteGame.ETrackIncline
enum class FortniteGame_ETrackIncline : uint8_t
{
	ETrackIncline__Flat            = 0,
	ETrackIncline__Up              = 1,
	ETrackIncline__Down            = 2,
	ETrackIncline__Max_None        = 3,
	ETrackIncline__ETrackIncline_MAX = 4,

};

// Enum FortniteGame.ETrackPieceType
enum class FortniteGame_ETrackPieceType : uint8_t
{
	ETrackPieceType__None          = 0,
	ETrackPieceType__Straight      = 1,
	ETrackPieceType__Turn          = 2,
	ETrackPieceType__Max_None      = 3,
	ETrackPieceType__ETrackPieceType_MAX = 4,

};

// Enum FortniteGame.ETrackDirection
enum class FortniteGame_ETrackDirection : uint8_t
{
	ETrackDirection__Up            = 0,
	ETrackDirection__Right         = 1,
	ETrackDirection__Down          = 2,
	ETrackDirection__Left          = 3,
	ETrackDirection__Max_None      = 4,
	ETrackDirection__ETrackDirection_MAX = 5,

};

// Enum FortniteGame.EFortAbilityTargetSelectionUsage
enum class FortniteGame_EFortAbilityTargetSelectionUsage : uint8_t
{
	EFortAbilityTargetSelectionUsage__BothTargetingAndCanHit = 0,
	EFortAbilityTargetSelectionUsage__OnlyTargeting = 1,
	EFortAbilityTargetSelectionUsage__OnlyCanHit = 2,
	EFortAbilityTargetSelectionUsage__EFortAbilityTargetSelectionUsage_MAX = 3,

};

// Enum FortniteGame.FDynamicBuildOrder
enum class FortniteGame_EFDynamicBuildOrder : uint8_t
{
	FDynamicBuildOrder__X          = 0,
	FDynamicBuildOrder__Y          = 1,
	FDynamicBuildOrder__Z          = 2,
	FDynamicBuildOrder__None       = 3,
	FDynamicBuildOrder__FDynamicBuildOrder_MAX = 4,

};

// Enum FortniteGame.EBinaryToggleValues
enum class FortniteGame_EBinaryToggleValues : uint8_t
{
	BTV_Active                     = 0,
	BTV_Inactive                   = 1,
	BTV_Either                     = 2,
	BTV_MAX                        = 3,

};

// Enum FortniteGame.EAuxIndicatorStates
enum class FortniteGame_EAuxIndicatorStates : uint8_t
{
	AIS_GuidingArrow               = 0,
	AIS_ConfirmedArrow             = 1,
	AIS_Inactive                   = 2,
	AIS_Active                     = 3,
	AIS_MAX                        = 4,

};

// Enum FortniteGame.EColorSwatchType
enum class FortniteGame_EColorSwatchType : uint8_t
{
	EColorSwatchType_Skin          = 0,
	EColorSwatchType_Hair          = 1,
	EColorSwatchType_BodyAccessory = 2,
	EColorSwatchType_Accessory     = 3,
	EColorSwatchType_NumTypes      = 4,
	EColorSwatchType_MAX           = 5,

};

// Enum FortniteGame.ECharacterColorSwatchType
enum class FortniteGame_ECharacterColorSwatchType : uint8_t
{
	ECharacterColorSwatchType_Skin = 0,
	ECharacterColorSwatchType_Hair = 1,
	ECharacterColorSwatchType_NumTypes = 2,
	ECharacterColorSwatchType_MAX  = 3,

};

// Enum FortniteGame.EAccessoryColorName
enum class FortniteGame_EAccessoryColorName : uint8_t
{
	EAccessoryColorName_AccessoryColor1 = 0,
	EAccessoryColorName_AccessoryColor2 = 1,
	EAccessoryColorName_AccessoryColor3 = 2,
	EAccessoryColorName_NumTypes   = 3,
	EAccessoryColorName_MAX        = 4,

};

// Enum FortniteGame.ECustomHatType
enum class FortniteGame_ECustomHatType : uint8_t
{
	ECustomHatType_None            = 0,
	ECustomHatType_Cap             = 1,
	ECustomHatType_Helmet          = 2,
	ECustomHatType_Mask            = 3,
	ECustomHatType_Hat             = 4,
	ECustomHatType_HeadReplacement = 5,
	ECustomHatType_MAX             = 6,

};

// Enum FortniteGame.EClothingColorName
enum class FortniteGame_EClothingColorName : uint8_t
{
	EClothingColorName_AccessoryColor1 = 0,
	EClothingColorName_AccessoryColor2 = 1,
	EClothingColorName_NumTypes    = 2,
	EClothingColorName_MAX         = 3,

};

// Enum FortniteGame.EFortItemPropertyValueType
enum class FortniteGame_EFortItemPropertyValueType : uint8_t
{
	EFortItemPropertyValueType__Float = 0,
	EFortItemPropertyValueType__Integer = 1,
	EFortItemPropertyValueType__Text = 2,
	EFortItemPropertyValueType__Color = 3,
	EFortItemPropertyValueType__TextArray = 4,
	EFortItemPropertyValueType__ImageBrush = 5,
	EFortItemPropertyValueType__EFortItemPropertyValueType_MAX = 6,

};

// Enum FortniteGame.EFortItemPropertyUnit
enum class FortniteGame_EFortItemPropertyUnit : uint8_t
{
	EFortItemPropertyUnit__NoUnit  = 0,
	EFortItemPropertyUnit__TimeSeconds = 1,
	EFortItemPropertyUnit__EFortItemPropertyUnit_MAX = 2,

};

// Enum FortniteGame.EFortItemPropertyDisplay
enum class FortniteGame_EFortItemPropertyDisplay : uint8_t
{
	EFortItemPropertyDisplay__BasicInt = 0,
	EFortItemPropertyDisplay__NegativeImpliesInfiniteInt = 1,
	EFortItemPropertyDisplay__BasicFloat = 2,
	EFortItemPropertyDisplay__NegativeImpliesInfiniteFloat = 3,
	EFortItemPropertyDisplay__BasicString = 4,
	EFortItemPropertyDisplay__NormalizedPercentage = 5,
	EFortItemPropertyDisplay__Color = 6,
	EFortItemPropertyDisplay__StringArray = 7,
	EFortItemPropertyDisplay__SlateBrush = 8,
	EFortItemPropertyDisplay__DoNotDisplay = 9,
	EFortItemPropertyDisplay__EFortItemPropertyDisplay_MAX = 10,

};

// Enum FortniteGame.EFortStatDisplayType
enum class FortniteGame_EFortStatDisplayType : uint8_t
{
	EFortStatDisplayType__Category = 0,
	EFortStatDisplayType__Buff     = 1,
	EFortStatDisplayType__Debuff   = 2,
	EFortStatDisplayType__Neutral  = 3,
	EFortStatDisplayType__DoNotDisplay = 4,
	EFortStatDisplayType__EFortStatDisplayType_MAX = 5,

};

// Enum FortniteGame.EPathUndermineEvent
enum class FortniteGame_EPathUndermineEvent : uint8_t
{
	EPathUndermineEvent__Predicted = 0,
	EPathUndermineEvent__Started   = 1,
	EPathUndermineEvent__Finished  = 2,
	EPathUndermineEvent__EPathUndermineEvent_MAX = 3,

};

// Enum FortniteGame.EPathObstacleAction
enum class FortniteGame_EPathObstacleAction : uint8_t
{
	EPathObstacleAction__Melee     = 0,
	EPathObstacleAction__Ignore    = 1,
	EPathObstacleAction__AbortMoveAsFailed = 2,
	EPathObstacleAction__FinishMoveAsSucceeded = 3,
	EPathObstacleAction__EPathObstacleAction_MAX = 4,

};

// Enum FortniteGame.EFortDirectedMovementSpace
enum class FortniteGame_EFortDirectedMovementSpace : uint8_t
{
	EFortDirectedMovementSpace__WorldSpace = 0,
	EFortDirectedMovementSpace__ActorLocRelative = 1,
	EFortDirectedMovementSpace__ActorLocRotRelative = 2,
	EFortDirectedMovementSpace__CameraRelative = 3,
	EFortDirectedMovementSpace__EFortDirectedMovementSpace_MAX = 4,

};

// Enum FortniteGame.EFortAbilityCostSource
enum class FortniteGame_EFortAbilityCostSource : uint8_t
{
	EFortAbilityCostSource__Stamina = 0,
	EFortAbilityCostSource__Durability = 1,
	EFortAbilityCostSource__AmmoMagazine = 2,
	EFortAbilityCostSource__AmmoPrimary = 3,
	EFortAbilityCostSource__Item   = 4,
	EFortAbilityCostSource__EFortAbilityCostSource_MAX = 5,

};

// Enum FortniteGame.EFortGameplayAbilityActivation
enum class FortniteGame_EFortGameplayAbilityActivation : uint8_t
{
	EFortGameplayAbilityActivation__Passive = 0,
	EFortGameplayAbilityActivation__Triggered = 1,
	EFortGameplayAbilityActivation__Active = 2,
	EFortGameplayAbilityActivation__EFortGameplayAbilityActivation_MAX = 3,

};

// Enum FortniteGame.EFortGameplayAbilityMontageSectionToPlay
enum class FortniteGame_EFortGameplayAbilityMontageSectionToPlay : uint8_t
{
	EFortGameplayAbilityMontageSectionToPlay__FirstSection = 0,
	EFortGameplayAbilityMontageSectionToPlay__RandomSection = 1,
	EFortGameplayAbilityMontageSectionToPlay__TestedRandomSection = 2,
	EFortGameplayAbilityMontageSectionToPlay__EFortGameplayAbilityMontageSectionToPlay_MAX = 3,

};

// Enum FortniteGame.EFortressAIType
enum class FortniteGame_EFortressAIType : uint8_t
{
	FAT_Dormant                    = 0,
	FAT_Cleaner                    = 1,
	FAT_DayWanderer                = 2,
	FAT_NightWanderer              = 3,
	FAT_DebugOnly                  = 4,
	FAT_Encounter                  = 5,
	FAT_MAX                        = 6,

};

// Enum FortniteGame.EFortAILODLevel
enum class FortniteGame_EFortAILODLevel : uint8_t
{
	EFortAILODLevel__Invalid       = 0,
	EFortAILODLevel__Lowest        = 1,
	EFortAILODLevel__Lower         = 2,
	EFortAILODLevel__Normal        = 3,
	EFortAILODLevel__EFortAILODLevel_MAX = 4,

};

// Enum FortniteGame.EWardAffectType
enum class FortniteGame_EWardAffectType : uint8_t
{
	EWardAffectType__AffectsBothStartAndEndPoints = 0,
	EWardAffectType__AffectsOnlyStartPoints = 1,
	EWardAffectType__AffectsOnlyEndPoints = 2,
	EWardAffectType__EWardAffectType_MAX = 3,

};

// Enum FortniteGame.EFortEncounterUtilityDesire
enum class FortniteGame_EFortEncounterUtilityDesire : uint8_t
{
	EFortEncounterUtilityDesire__Low = 0,
	EFortEncounterUtilityDesire__Medium = 1,
	EFortEncounterUtilityDesire__High = 2,
	EFortEncounterUtilityDesire__VeryHigh = 3,
	EFortEncounterUtilityDesire__Max_None = 4,
	EFortEncounterUtilityDesire__EFortEncounterUtilityDesire_MAX = 5,

};

// Enum FortniteGame.EFortAIDirectorFactorContribution
enum class FortniteGame_EFortAIDirectorFactorContribution : uint8_t
{
	EFortAIDirectorFactorContribution__Direct = 0,
	EFortAIDirectorFactorContribution__Inverse = 1,
	EFortAIDirectorFactorContribution__EFortAIDirectorFactorContribution_MAX = 2,

};

// Enum FortniteGame.EFortAIDirectorEventContribution
enum class FortniteGame_EFortAIDirectorEventContribution : uint8_t
{
	EFortAIDirectorEventContribution__Increment = 0,
	EFortAIDirectorEventContribution__Set = 1,
	EFortAIDirectorEventContribution__EFortAIDirectorEventContribution_MAX = 2,

};

// Enum FortniteGame.ETagGoalScoringCategory
enum class FortniteGame_ETagGoalScoringCategory : uint8_t
{
	ETagGoalScoringCategory__Ignore = 0,
	ETagGoalScoringCategory__HighInterest = 1,
	ETagGoalScoringCategory__NumCategories = 2,
	ETagGoalScoringCategory__ETagGoalScoringCategory_MAX = 3,

};

// Enum FortniteGame.EFortIntensityCurveSequenceType
enum class FortniteGame_EFortIntensityCurveSequenceType : uint8_t
{
	EFortIntensityCurveSequenceType__Sequence = 0,
	EFortIntensityCurveSequenceType__Loop = 1,
	EFortIntensityCurveSequenceType__Random = 2,
	EFortIntensityCurveSequenceType__Max_None = 3,
	EFortIntensityCurveSequenceType__EFortIntensityCurveSequenceType_MAX = 4,

};

// Enum FortniteGame.EFortAIWaveProgressSection
enum class FortniteGame_EFortAIWaveProgressSection : uint8_t
{
	EFortAIWaveProgressSection__SectionOne = 0,
	EFortAIWaveProgressSection__SectionTwo = 1,
	EFortAIWaveProgressSection__Max_None = 2,
	EFortAIWaveProgressSection__EFortAIWaveProgressSection_MAX = 3,

};

// Enum FortniteGame.EFortEncounterState
enum class FortniteGame_EFortEncounterState : uint8_t
{
	EFortEncounterState__Uninitialized = 0,
	EFortEncounterState__InitializingProperties = 1,
	EFortEncounterState__InitializingRiftManager = 2,
	EFortEncounterState__AwaitingActivation = 3,
	EFortEncounterState__Active    = 4,
	EFortEncounterState__Max_None  = 5,
	EFortEncounterState__EFortEncounterState_MAX = 6,

};

// Enum FortniteGame.EFortEncounterPacingState
enum class FortniteGame_EFortEncounterPacingState : uint8_t
{
	EFortEncounterPacingState__Ramp = 0,
	EFortEncounterPacingState__Peak = 1,
	EFortEncounterPacingState__Fade = 2,
	EFortEncounterPacingState__Rest = 3,
	EFortEncounterPacingState__Max_None = 4,
	EFortEncounterPacingState__EFortEncounterPacingState_MAX = 5,

};

// Enum FortniteGame.EFortThreatDeactivationType
enum class FortniteGame_EFortThreatDeactivationType : uint8_t
{
	EFortThreatDeactivationType__Off = 0,
	EFortThreatDeactivationType__Dormant = 1,
	EFortThreatDeactivationType__EFortThreatDeactivationType_MAX = 2,

};

// Enum FortniteGame.EFortEncounterSequenceResult
enum class FortniteGame_EFortEncounterSequenceResult : uint8_t
{
	EFortEncounterSequenceResult__Success = 0,
	EFortEncounterSequenceResult__FailedEncounterInProgress = 1,
	EFortEncounterSequenceResult__EFortEncounterSequenceResult_MAX = 2,

};

// Enum FortniteGame.EAssignmentCreationResult
enum class FortniteGame_EAssignmentCreationResult : uint8_t
{
	EAssignmentCreationResult__AssignmentNotFoundOrCreated = 0,
	EAssignmentCreationResult__AssignmentCreated = 1,
	EAssignmentCreationResult__AssignmentFound = 2,
	EAssignmentCreationResult__EAssignmentCreationResult_MAX = 3,

};

// Enum FortniteGame.ECorePerceptionTypes
enum class FortniteGame_ECorePerceptionTypes : uint8_t
{
	ECorePerceptionTypes__Sight    = 0,
	ECorePerceptionTypes__Hearing  = 1,
	ECorePerceptionTypes__Damage   = 2,
	ECorePerceptionTypes__Touch    = 3,
	ECorePerceptionTypes__Team     = 4,
	ECorePerceptionTypes__Prediction = 5,
	ECorePerceptionTypes__MAX      = 6,
	ECorePerceptionTypes__ECorePerceptionTypes_MAX = 7,

};

// Enum FortniteGame.EStatRecordingPeriod
enum class FortniteGame_EStatRecordingPeriod : uint8_t
{
	EStatRecordingPeriod__Minute   = 0,
	EStatRecordingPeriod__Life     = 1,
	EStatRecordingPeriod__Map      = 2,
	EStatRecordingPeriod__Campaign = 3,
	EStatRecordingPeriod__Persistent = 4,
	EStatRecordingPeriod__Max      = 5,
	EStatRecordingPeriod__EStatRecordingPeriod_MAX = 6,

};

// Enum FortniteGame.EStatMod
enum class FortniteGame_EStatMod : uint8_t
{
	EStatMod__Delta                = 0,
	EStatMod__Set                  = 1,
	EStatMod__Maximum              = 2,
	EStatMod__EStatMod_MAX         = 3,

};

// Enum FortniteGame.EMontageInterrupt
enum class FortniteGame_EMontageInterrupt : uint8_t
{
	EMontageInterrupt__Any         = 0,
	EMontageInterrupt__RootMotionOnly = 1,
	EMontageInterrupt__None        = 2,
	EMontageInterrupt__EMontageInterrupt_MAX = 3,

};

// Enum FortniteGame.ETargetDistanceComparisonType
enum class FortniteGame_ETargetDistanceComparisonType : uint8_t
{
	ETargetDistanceComparisonType__TwoDimensions = 0,
	ETargetDistanceComparisonType__ThreeDimensions = 1,
	ETargetDistanceComparisonType__CollisionHalfHeightMultiplier = 2,
	ETargetDistanceComparisonType__ETargetDistanceComparisonType_MAX = 3,

};

// Enum FortniteGame.EFrontEndCamera
enum class FortniteGame_EFrontEndCamera : uint8_t
{
	EFrontEndCamera__Invalid       = 0,
	EFrontEndCamera__HomeBase      = 1,
	EFrontEndCamera__MissionControl = 2,
	EFrontEndCamera__Store         = 3,
	EFrontEndCamera__Vault         = 4,
	EFrontEndCamera__Heroes        = 5,
	EFrontEndCamera__Login         = 6,
	EFrontEndCamera__TutorialPhaseOne = 7,
	EFrontEndCamera__TutorialPhaseTwo = 8,
	EFrontEndCamera__TutorialPhaseThree = 9,
	EFrontEndCamera__HeroSelect    = 10,
	EFrontEndCamera__Party         = 11,
	EFrontEndCamera__WorldMap      = 12,
	EFrontEndCamera__EFrontEndCamera_MAX = 13,

};

// Enum FortniteGame.ECameraOrigin
enum class FortniteGame_ECameraOrigin : uint8_t
{
	ECameraOrigin__ViewTargetTransform = 0,
	ECameraOrigin__BoneTransform   = 1,
	ECameraOrigin__ECameraOrigin_MAX = 2,

};

// Enum FortniteGame.EFortDamageNumberType
enum class FortniteGame_EFortDamageNumberType : uint8_t
{
	EFortDamageNumberType__None    = 0,
	EFortDamageNumberType__Pawn    = 1,
	EFortDamageNumberType__Building = 2,
	EFortDamageNumberType__Player  = 3,
	EFortDamageNumberType__Shield  = 4,
	EFortDamageNumberType__EFortDamageNumberType_MAX = 5,

};

// Enum FortniteGame.EFortEventNotificationParameter
enum class FortniteGame_EFortEventNotificationParameter : uint8_t
{
	EFortEventNotificationParameter__ENPAR_None = 0,
	EFortEventNotificationParameter__ENPAR_SchematicItemGuid = 1,
	EFortEventNotificationParameter__ENPAR_ActionBinding = 2,
	EFortEventNotificationParameter__ENPAR_MAX = 3,

};

// Enum FortniteGame.EFortEventNotificationPriority
enum class FortniteGame_EFortEventNotificationPriority : uint8_t
{
	EFortEventNotificationPriority__ENP_Normal = 0,
	EFortEventNotificationPriority__ENP_High = 1,
	EFortEventNotificationPriority__ENP_MAX = 2,

};

// Enum FortniteGame.EFortServerGameMode
enum class FortniteGame_EFortServerGameMode : uint8_t
{
	EFortServerGameMode__Idle      = 0,
	EFortServerGameMode__LobbyPvE  = 1,
	EFortServerGameMode__LobbyPvP  = 2,
	EFortServerGameMode__ZonePvP   = 3,
	EFortServerGameMode__ZonePvE   = 4,
	EFortServerGameMode__EFortServerGameMode_MAX = 5,

};

// Enum FortniteGame.EFortInputPreset
enum class FortniteGame_EFortInputPreset : uint8_t
{
	EFortInputPreset__Default      = 0,
	EFortInputPreset__Preset1      = 1,
	EFortInputPreset__EFortInputPreset_MAX = 2,

};

// Enum FortniteGame.EFortCharacterCosmetic
enum class FortniteGame_EFortCharacterCosmetic : uint8_t
{
	EFortCharacterCosmetic__Head   = 0,
	EFortCharacterCosmetic__Texture = 1,
	EFortCharacterCosmetic__Color  = 2,
	EFortCharacterCosmetic__Trinket = 3,
	EFortCharacterCosmetic__Face   = 4,
	EFortCharacterCosmetic__Gadget = 5,
	EFortCharacterCosmetic__Body   = 6,
	EFortCharacterCosmetic__ClassFlair = 7,
	EFortCharacterCosmetic__Max_Invalid = 8,
	EFortCharacterCosmetic__EFortCharacterCosmetic_MAX = 9,

};

// Enum FortniteGame.EFortQuestType
enum class FortniteGame_EFortQuestType : uint8_t
{
	EFortQuestType__Task           = 0,
	EFortQuestType__DailyQuest     = 1,
	EFortQuestType__Achievement    = 2,
	EFortQuestType__Onboarding     = 3,
	EFortQuestType__EFortQuestType_MAX = 4,

};

// Enum FortniteGame.ELobbyMissionGeneratorDetailsRequirement
enum class FortniteGame_ELobbyMissionGeneratorDetailsRequirement : uint8_t
{
	ELobbyMissionGeneratorDetailsRequirement__Unknown = 0,
	ELobbyMissionGeneratorDetailsRequirement__NotRequired = 1,
	ELobbyMissionGeneratorDetailsRequirement__Required = 2,
	ELobbyMissionGeneratorDetailsRequirement__ELobbyMissionGeneratorDetailsRequirement_MAX = 3,

};

// Enum FortniteGame.EFortMatchmakingType
enum class FortniteGame_EFortMatchmakingType : uint8_t
{
	EFortMatchmakingType__Gathering = 0,
	EFortMatchmakingType__CriticalMission = 1,
	EFortMatchmakingType__Session  = 2,
	EFortMatchmakingType__EFortMatchmakingType_MAX = 3,

};

// Enum FortniteGame.EFortCheatMissionGenType
enum class FortniteGame_EFortCheatMissionGenType : uint8_t
{
	EFortCheatMissionGenType__NewGeneration = 0,
	EFortCheatMissionGenType__OldGeneration = 1,
	EFortCheatMissionGenType__Max_None = 2,
	EFortCheatMissionGenType__EFortCheatMissionGenType_MAX = 3,

};

// Enum FortniteGame.EPollActorsInVolumeTypes
enum class FortniteGame_EPollActorsInVolumeTypes : uint8_t
{
	EPollActorsInVolumeTypes__DesignerPlacedOnly = 0,
	EPollActorsInVolumeTypes__PlayerBuiltOnly = 1,
	EPollActorsInVolumeTypes__All  = 2,
	EPollActorsInVolumeTypes__EPollActorsInVolumeTypes_MAX = 3,

};

// Enum FortniteGame.EMissionReplyTypes
enum class FortniteGame_EMissionReplyTypes : uint8_t
{
	EMissionReplyTypes__Handled    = 0,
	EMissionReplyTypes__NotHandled = 1,
	EMissionReplyTypes__EMissionReplyTypes_MAX = 2,

};

// Enum FortniteGame.ETimerOverrideSetting
enum class FortniteGame_ETimerOverrideSetting : uint8_t
{
	ETimerOverrideSetting__DefaultBehavior = 0,
	ETimerOverrideSetting__ForceShow = 1,
	ETimerOverrideSetting__ForceHide = 2,
	ETimerOverrideSetting__ETimerOverrideSetting_MAX = 3,

};

// Enum FortniteGame.EMusicChannel
enum class FortniteGame_EMusicChannel : uint8_t
{
	EMusicChannel__A               = 0,
	EMusicChannel__B               = 1,
	EMusicChannel__Stinger         = 2,
	EMusicChannel__Max_None        = 3,
	EMusicChannel__EMusicChannel_MAX = 4,

};

// Enum FortniteGame.EMusicFadeStyles
enum class FortniteGame_EMusicFadeStyles : uint8_t
{
	EMusicFadeStyles__CrossFade    = 0,
	EMusicFadeStyles__FadeOutThenIn = 1,
	EMusicFadeStyles__Max_None     = 2,
	EMusicFadeStyles__EMusicFadeStyles_MAX = 3,

};

// Enum FortniteGame.EFortAreaFlag
enum class FortniteGame_EFortAreaFlag : uint8_t
{
	EFortAreaFlag__Default         = 0,
	EFortAreaFlag__Obstacle        = 1,
	EFortAreaFlag__Smashable       = 2,
	EFortAreaFlag__Unwalkable      = 3,
	EFortAreaFlag__Interactable    = 4,
	EFortAreaFlag__EFortAreaFlag_MAX = 5,

};

// Enum FortniteGame.EFortNavLinkPattern
enum class FortniteGame_EFortNavLinkPattern : uint8_t
{
	EFortNavLinkPattern__Floor     = 0,
	EFortNavLinkPattern__Stairs    = 1,
	EFortNavLinkPattern__Roof      = 2,
	EFortNavLinkPattern__Manual    = 3,
	EFortNavLinkPattern__EFortNavLinkPattern_MAX = 4,

};

// Enum FortniteGame.EFortNamedNavmesh
enum class FortniteGame_EFortNamedNavmesh : uint8_t
{
	EFortNamedNavmesh__Husk        = 0,
	EFortNamedNavmesh__Smasher     = 1,
	EFortNamedNavmesh__MAX         = 2,
	EFortNamedNavmesh__EFortNamedNavmesh_MAX = 3,

};

// Enum FortniteGame.EFortPartyMemberLocation
enum class FortniteGame_EFortPartyMemberLocation : uint8_t
{
	EFortPartyMemberLocation__PreLobby = 0,
	EFortPartyMemberLocation__ConnectingToLobby = 1,
	EFortPartyMemberLocation__Lobby = 2,
	EFortPartyMemberLocation__JoiningGame = 3,
	EFortPartyMemberLocation__InGame = 4,
	EFortPartyMemberLocation__EFortPartyMemberLocation_MAX = 5,

};

// Enum FortniteGame.EFortAnnouncerTeamVocalChords
enum class FortniteGame_EFortAnnouncerTeamVocalChords : uint8_t
{
	EFortAnnouncerTeamVocalChords__Team1 = 0,
	EFortAnnouncerTeamVocalChords__Team2 = 1,
	EFortAnnouncerTeamVocalChords__Max_None = 2,
	EFortAnnouncerTeamVocalChords__EFortAnnouncerTeamVocalChords_MAX = 3,

};

// Enum FortniteGame.EFortContextualReticleTypes
enum class FortniteGame_EFortContextualReticleTypes : uint8_t
{
	FCR_GenericFailure             = 0,
	FCR_Upgrade                    = 1,
	FCR_Repair                     = 2,
	FCR_Locked                     = 3,
	FCR_Placement                  = 4,
	FCR_Edit                       = 5,
	FCR_NoTarget                   = 6,
	FCR_InProgress                 = 7,
	FCR_None                       = 8,
	FCR_MAX                        = 9,

};

// Enum FortniteGame.EFortPointsFromNavGraphGoalPathDistanceFilterOperator
enum class FortniteGame_EFortPointsFromNavGraphGoalPathDistanceFilterOperator : uint8_t
{
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AllGoalsInRange = 0,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AnyGoalInRange = 1,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__EFortPointsFromNavGraphGoalPathDistanceFilterOperator_MAX = 2,

};

// Enum FortniteGame.EFortTestGoalActorDot
enum class FortniteGame_EFortTestGoalActorDot : uint8_t
{
	EFortTestGoalActorDot__Dot3D   = 0,
	EFortTestGoalActorDot__Dot2D   = 1,
	EFortTestGoalActorDot__EFortTestGoalActorDot_MAX = 2,

};

// Enum FortniteGame.EDistanceMode
enum class FortniteGame_EDistanceMode : uint8_t
{
	EDistanceMode__DistItemToContext = 0,
	EDistanceMode__DistItemGoalActorToContext = 1,
	EDistanceMode__DistItemToItemGoalActor = 2,
	EDistanceMode__EDistanceMode_MAX = 3,

};

// Enum FortniteGame.ECountAIAssignedToType
enum class FortniteGame_ECountAIAssignedToType : uint8_t
{
	ECountAIAssignedToType__Goal   = 0,
	ECountAIAssignedToType__Actor  = 1,
	ECountAIAssignedToType__Assignment = 2,
	ECountAIAssignedToType__ECountAIAssignedToType_MAX = 3,

};

// Enum FortniteGame.EFortScriptedActionEnvironment
enum class FortniteGame_EFortScriptedActionEnvironment : uint8_t
{
	EFortScriptedActionEnvironment__FrontEnd = 0,
	EFortScriptedActionEnvironment__GameServer = 1,
	EFortScriptedActionEnvironment__GameClient = 2,
	EFortScriptedActionEnvironment__Max_None = 3,
	EFortScriptedActionEnvironment__EFortScriptedActionEnvironment_MAX = 4,

};

// Enum FortniteGame.EFortScriptedActionSource
enum class FortniteGame_EFortScriptedActionSource : uint8_t
{
	EFortScriptedActionSource__Quest = 0,
	EFortScriptedActionSource__Token = 1,
	EFortScriptedActionSource__Manual = 2,
	EFortScriptedActionSource__Max_None = 3,
	EFortScriptedActionSource__EFortScriptedActionSource_MAX = 4,

};

// Enum FortniteGame.EFortSocialItemPresenceStatus
enum class FortniteGame_EFortSocialItemPresenceStatus : uint8_t
{
	EFortSocialItemPresenceStatus__Offline = 0,
	EFortSocialItemPresenceStatus__InGame = 1,
	EFortSocialItemPresenceStatus__Away = 2,
	EFortSocialItemPresenceStatus__Unknown = 3,
	EFortSocialItemPresenceStatus__EFortSocialItemPresenceStatus_MAX = 4,

};

// Enum FortniteGame.EFortSocialItemType
enum class FortniteGame_EFortSocialItemType : uint8_t
{
	EFortSocialItemType__Header    = 0,
	EFortSocialItemType__Friend    = 1,
	EFortSocialItemType__PartyInvite = 2,
	EFortSocialItemType__RecentPlayer = 3,
	EFortSocialItemType__Max       = 4,
	EFortSocialItemType__EFortSocialItemType_MAX = 5,

};

// Enum FortniteGame.EFortEventConditionType
enum class FortniteGame_EFortEventConditionType : uint8_t
{
	EFortEventConditionType__EFEC_StatCompare = 0,
	EFortEventConditionType__EFEC_CanCraft = 1,
	EFortEventConditionType__EFEC_MAX = 2,

};

// Enum FortniteGame.EFortCompare
enum class FortniteGame_EFortCompare : uint8_t
{
	EFortCompare__EFC_LessThan     = 0,
	EFortCompare__EFC_LessThanOrEqual = 1,
	EFortCompare__EFC_GreaterThan  = 2,
	EFortCompare__EFC_GreaterThanOrEqual = 3,
	EFortCompare__EFC_Equals       = 4,
	EFortCompare__EFC_MAX          = 5,

};

// Enum FortniteGame.EFortEventRepeat
enum class FortniteGame_EFortEventRepeat : uint8_t
{
	EFortEventRepeat__EFER_Inactive = 0,
	EFortEventRepeat__EFER_Always  = 1,
	EFortEventRepeat__EFER_OncePerPlayer = 2,
	EFortEventRepeat__EFER_OncePerCampaign = 3,
	EFortEventRepeat__EFER_OncePerMap = 4,
	EFortEventRepeat__EFER_MAX     = 5,

};

// Enum FortniteGame.EFortVisibilityBehavior
enum class FortniteGame_EFortVisibilityBehavior : uint8_t
{
	EFortVisibilityBehavior__Proximity = 0,
	EFortVisibilityBehavior__OnceSeenAlwaysSeen = 1,
	EFortVisibilityBehavior__Invalid = 2,
	EFortVisibilityBehavior__EFortVisibilityBehavior_MAX = 3,

};

// Enum FortniteGame.EFortReloadMontageSection
enum class FortniteGame_EFortReloadMontageSection : uint8_t
{
	EFortReloadMontageSection__Intro = 0,
	EFortReloadMontageSection__Loop = 1,
	EFortReloadMontageSection__Outro = 2,
	EFortReloadMontageSection__EFortReloadMontageSection_MAX = 3,

};

// Enum FortniteGame.EFortWorldManagerState
enum class FortniteGame_EFortWorldManagerState : uint8_t
{
	WMS_Created                    = 0,
	WMS_QueryingWorld              = 1,
	WMS_WorldQueryComplete         = 2,
	WMS_CreatingNewWorld           = 3,
	WMS_LoadingExistingWorld       = 4,
	WMS_Running                    = 5,
	WMS_Failed                     = 6,
	WMS_MAX                        = 7,

};

// Enum FortniteGame.EFortLevelStreamingState
enum class FortniteGame_EFortLevelStreamingState : uint8_t
{
	LSS_Unloaded                   = 0,
	LSS_Loaded                     = 1,
	LSS_FoundationsUpdated         = 2,
	LSS_NewActorsCreatedButNotUpdated = 3,
	LSS_AllUpdated                 = 4,
	LSS_Ready                      = 5,
	LSS_MAX                        = 6,

};

// Enum FortniteGame.EFortWorldRecordState
enum class FortniteGame_EFortWorldRecordState : uint8_t
{
	EFortWorldRecordState__StartProcessing = 0,
	EFortWorldRecordState__WaitingForResponse = 1,
	EFortWorldRecordState__RetrievingTheaterInformation = 2,
	EFortWorldRecordState__RetrievingZoneInformation = 3,
	EFortWorldRecordState__RetrievingWorldMetadata = 4,
	EFortWorldRecordState__EnumeratingCloudFiles = 5,
	EFortWorldRecordState__LoadingWorldRecord = 6,
	EFortWorldRecordState__LoadingZoneRecord = 7,
	EFortWorldRecordState__SavingZoneRecord = 8,
	EFortWorldRecordState__SavingWorldRecord = 9,
	EFortWorldRecordState__SavingPlayerProfiles = 10,
	EFortWorldRecordState__Succeeded = 11,
	EFortWorldRecordState__Failed  = 12,
	EFortWorldRecordState__Max_None = 13,
	EFortWorldRecordState__EFortWorldRecordState_MAX = 14,

};

// Enum FortniteGame.EFortWorldRecordAction
enum class FortniteGame_EFortWorldRecordAction : uint8_t
{
	EFortWorldRecordAction__LoadWorldOnly = 0,
	EFortWorldRecordAction__SaveWorldOnly = 1,
	EFortWorldRecordAction__SaveZoneAndWorld = 2,
	EFortWorldRecordAction__LoadZoneAndWorld = 3,
	EFortWorldRecordAction__Max_None = 4,
	EFortWorldRecordAction__EFortWorldRecordAction_MAX = 5,

};

// Enum FortniteGame.EFortZoneType
enum class FortniteGame_EFortZoneType : uint8_t
{
	EFortZoneType__PVE             = 0,
	EFortZoneType__PVP             = 1,
	EFortZoneType__Keep            = 2,
	EFortZoneType__SingleZone      = 3,
	EFortZoneType__Max_None        = 4,
	EFortZoneType__EFortZoneType_MAX = 5,

};

// Enum FortniteGame.EWorkerEmploy
enum class FortniteGame_EWorkerEmploy : uint8_t
{
	EWorkerEmploy__None            = 0,
	EWorkerEmploy__CurrentBuilding = 1,
	EWorkerEmploy__OtherBuilding   = 2,
	EWorkerEmploy__EWorkerEmploy_MAX = 3,

};

// Enum FortniteGame.EMyTownBuildingActorDisplayState
enum class FortniteGame_EMyTownBuildingActorDisplayState : uint8_t
{
	EMyTownBuildingActorDisplayState__Standard = 0,
	EMyTownBuildingActorDisplayState__Custom = 1,
	EMyTownBuildingActorDisplayState__Hidden = 2,
	EMyTownBuildingActorDisplayState__EMyTownBuildingActorDisplayState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FortniteGame.FortMultiSizeBrush
// 0x02B8
struct FFortMultiSizeBrush
{
	struct FSlateBrush                                 Brush_XXS;                                                 // 0x0000(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Brush_XS;                                                  // 0x0074(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Brush_S;                                                   // 0x00E8(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Brush_M;                                                   // 0x015C(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Brush_L;                                                   // 0x01D0(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Brush_XL;                                                  // 0x0244(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAttributeDetailsInfo
// 0x02E8
struct FFortAttributeDetailsInfo
{
	struct FGameplayTagContainer                       RequiredTags;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                         Icon;                                                      // 0x0018(0x02B8) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x02D0(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x02DC(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAttributeInfo
// 0x0024
struct FFortAttributeInfo
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAttributeDisplay>    DisplayMethod;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JZ9D[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       UnitDisplayName;                                           // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortAttributeDetailsInfo>           AttributeDetails;                                          // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bShowInSummaries;                                          // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bShowInDifferences;                                        // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bNegativeValuesShouldBeDisplayedPositively;                // 0x0022(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O46J[0x1];                                     // 0x0023(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.GameplayEffectInfo
// 0x0024
struct FGameplayEffectInfo
{
	struct FName                                       Attribute;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Magnitude;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Operation;                                                 // 0x000C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rating;                                                    // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       NumericDescription;                                        // 0x0018(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortWeaponDurabilityByRarityStats
// 0x0028
struct FFortWeaponDurabilityByRarityStats : public FTableRowBase
{
	int                                                Handmade;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Ordinary;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Sturdy;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Quality;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Fine;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Elegant;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Masterwork;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Epic;                                                      // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Badass;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Legendary;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortBaseWeaponStats
// 0x00EC
struct FFortBaseWeaponStats : public FTableRowBase
{
	unsigned char                                      UnknownData_CB7N[0x1];                                     // 0x0000(0x0001) Fix Super Size
	unsigned char                                      UnknownData_8LQ0[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BaseLevel;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DmgPB;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DmgMid;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DmgLong;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DmgMaxRange;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EnvDmgPB;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EnvDmgMid;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EnvDmgLong;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EnvDmgMaxRange;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RngPB;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RngMid;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RngLong;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RngMax;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                                 DmgScaleTable;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       DmgScaleTableRow;                                          // 0x003C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DmgScale;                                                  // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                                 EnvDmgScaleTable;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       EnvDmgScaleTableRow;                                       // 0x004C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EnvDmgScale;                                               // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       SurfaceRatioRowName;                                       // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DamageZone_Light;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DamageZone_Normal;                                         // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DamageZone_Critical;                                       // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DamageZone_Vulnerability;                                  // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              KnockbackMagnitude;                                        // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MidRangeKnockbackMagnitude;                                // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LongRangeKnockbackMagnitude;                               // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              KnockbackZAngle;                                           // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ControlStrength;                                           // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MidRangeControlStrength;                                   // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LongRangeControlStrength;                                  // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StunTime;                                                  // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StunScale;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  Durability;                                                // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       DurabilityRowName;                                         // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DurabilityScale;                                           // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                DurabilityPerUse;                                          // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DurabilityChance;                                          // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DiceCritChance;                                            // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DiceCritDamageMultiplier;                                  // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ReloadTime;                                                // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ReloadScale;                                               // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bReloadIndividualBullets;                                  // 0x00BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BT55[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ClipSize;                                                  // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ClipScale;                                                 // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                InitialClips;                                              // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CartridgePerFire;                                          // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                AmmoCostPerFire;                                           // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxAmmoCostPerFire;                                        // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinChargeTime;                                             // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxChargeTime;                                             // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ChargeDownTime;                                            // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinChargeDamageMultiplier;                                 // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxChargeDamageMultiplier;                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortTrapStats
// 0x0014 (0x0100 - 0x00EC)
struct FFortTrapStats : public FFortBaseWeaponStats
{
	float                                              ArmTime;                                                   // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FireDelay;                                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDelay;                                               // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlacementScore;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ActivationScore;                                           // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortRangedWeaponStats
// 0x008C (0x0178 - 0x00EC)
struct FFortRangedWeaponStats : public FFortBaseWeaponStats
{
	float                                              Spread;                                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpreadDownsights;                                          // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StandingStillSpreadMultiplier;                             // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeatX1;                                                    // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeatY1;                                                    // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeatX2;                                                    // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeatY2;                                                    // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeatX3;                                                    // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeatY3;                                                    // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeatXScale;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeatYScale;                                                // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CoolX1;                                                    // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CoolY1;                                                    // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CoolX2;                                                    // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CoolY2;                                                    // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CoolX3;                                                    // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CoolY3;                                                    // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CoolXScale;                                                // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CoolYScale;                                                // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BulletsPerCartridge;                                       // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FiringRate;                                                // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ROFScale;                                                  // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BurstFiringRate;                                           // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RecoilVert;                                                // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RecoilVertScale;                                           // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              VertRecoilDownChance;                                      // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RecoilHoriz;                                               // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RecoilHorizScale;                                          // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RecoilInterpSpeed;                                         // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RecoilRecoveryInterpSpeed;                                 // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RecoilRecoveryDelay;                                       // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RecoilRecoveryFraction;                                    // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RecoilDownsightsMultiplier;                                // 0x016C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxSpareAmmo;                                              // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BulletsPerTracer;                                          // 0x0174(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortPawnStats
// 0x0030
struct FFortPawnStats : public FTableRowBase
{
	float                                              MaximumHealth;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpeedWalk;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpeedRun;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpeedSprint;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpeedBackwardsMultiplier;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                                 FallingDamageTable;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       FallingDamageTableRow;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              KnockbackResistThreshold;                                  // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              KnockbackResistMagScale;                                   // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StunResistThreshold;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StunResistMagScale;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortMeleeWeaponStats
// 0x0024 (0x0110 - 0x00EC)
struct FFortMeleeWeaponStats : public FFortBaseWeaponStats
{
	float                                              RangeVSEnemies;                                            // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ConeYawAngle;                                              // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ConePitchAngle;                                            // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SwingPlaySpeed;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BuildingConeAngle;                                         // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BuildingConeAnglePitch;                                    // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RangeVSBuildings2D;                                        // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RangeVSBuildingsZ;                                         // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RangeVSWeakSpots;                                          // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.ReplicatedStatValues
// 0x0008
struct FReplicatedStatValues
{
	int                                                StatValue;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreValue;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPlayerScoreReport
// 0x0228
struct FFortPlayerScoreReport
{
	TWeakObjectPtr<class AFortPlayerState>             PlayerState;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // 0x0008(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortTeam>                PlayerTeam;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_655R[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FReplicatedStatValues                       ReplicatedStats_Campaign[0x21];                            // 0x0018(0x0108) (NativeAccessSpecifierPublic)
	struct FReplicatedStatValues                       ReplicatedStats_Zone[0x21];                                // 0x0120(0x0108) (NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TrackPieceConfig
// 0x0010
struct FTrackPieceConfig
{
	TEnumAsByte<FortniteGame_ETrackPieceType>          Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9CZT[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    Rotation;                                                  // 0x0004(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.AIHotSpotSlotConfig
// 0x001C
struct FAIHotSpotSlotConfig
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortHotSpotSlot>         SlotType;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_84ZB[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.BuildingActorHotSpotDirection
// 0x0018
struct FBuildingActorHotSpotDirection
{
	class UAIHotSpotConfig*                            HotSpotConfig;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bMirrorX : 1;                                              // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bMirrorY : 1;                                              // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J1UC[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<FortniteGame_EFortHotSpotDirection>    Direction;                                                 // 0x0014(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F3DC[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortSearchPassParams
// 0x001C
struct FFortSearchPassParams
{
	int                                                ControllerId;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SessionName;                                               // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BestDatacenterId;                                          // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D5C2[0x4];                                     // 0x0018(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortSearchPassState
// 0x001C
struct FFortSearchPassState
{
	int                                                BestSessionIdx;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WUIDLockSemaphore;                                         // 0x0004(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasCanceled;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasFailure;                                               // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EMatchmakingState>        MatchmakingState;                                          // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> LastBeaconResponse;                                        // 0x0013(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCPT[0x8];                                     // 0x0014(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.MatchmakingParams
// 0x0064
struct FMatchmakingParams
{
	int                                                ControllerId;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PartySize;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DatacenterId;                                              // 0x0008(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlaylistId;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchmakingLevel;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MissionPowerMin;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MissionPowerMax;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TheaterId;                                                 // 0x0024(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZoneInstanceId;                                            // 0x0030(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WUID;                                                      // 0x003C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            WorldOwnerId;                                              // 0x0048(0x0008) (NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0050(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EMatchmakingStartLocation> StartWith;                                                 // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EMatchmakingFlags>        Flags;                                                     // 0x005D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZVEC[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChanceToHostOverride;                                      // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.GameplayEffectApplicationInfo
// 0x0008
struct FGameplayEffectApplicationInfo
{
	class UClass*                                      GameplayEffect;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTooltipMapEntry
// 0x0008
struct FFortTooltipMapEntry
{
	class UClass*                                      ObjectClass;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TooltipClass;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortRequirementsInfo
// 0x0020
struct FFortRequirementsInfo
{
	int                                                CommanderLevel;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PersonalPowerRating;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PartyPowerRating;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestItemDefinition*                    QuestDefinition;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         ObjectiveStatHandle;                                       // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                         ItemDefinition;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.HeroItem
// 0x0040
struct FHeroItem
{
	class UFortWorldItemDefinition*                    Item;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortReplenishmentType>   Replenishment;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QOTY[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       RequiredGPTags;                                            // 0x000C(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SwapTag;                                                   // 0x0024(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bShowInAbilityScreen;                                      // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_99M5[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.HeroAbilityKit
// 0x0020
struct FHeroAbilityKit
{
	class UFortAbilityKit*                             InherentAbilityKit;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredGPTags;                                            // 0x0004(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bShowInAbilityScreen;                                      // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YFBH[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortAbilityKitSlot
// 0x000C
struct FFortAbilityKitSlot
{
	TArray<class UFortAbilityKit*>                     AbilityKits;                                               // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.AbilityKitItem
// 0x000C
struct FAbilityKitItem
{
	class UFortWorldItemDefinition*                    Item;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortReplenishmentType>   Replenishment;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7BHV[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortSavedModeLoadout
// 0x0018
struct FFortSavedModeLoadout
{
	struct FString                                     LoadoutName;                                               // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             SelectedGadgets;                                           // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.SelectedClassAbilityKits
// 0x0064
struct FSelectedClassAbilityKits
{
	class UFortAbilityKit*                             AbilityKits[0x19];                                         // 0x0000(0x0064) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MyTownSubBuildingData
// 0x0004
struct FMyTownSubBuildingData
{
	class UMyTownBuildingDefinitionData*               SubBuilding;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MyTownBuildingData
// 0x0008
struct FMyTownBuildingData
{
	class UMyTownBuildingDefinitionData*               Building;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapSlotId;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MyTownRoadData
// 0x0010
struct FMyTownRoadData
{
	struct FName                                       BuildingName1;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BuildingName2;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MyTownWorkerSetBonusData
// 0x0030
struct FMyTownWorkerSetBonusData
{
	struct FGameplayTagContainer                       SetBonusTypeTag;                                           // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0018(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                RequiredWorkersCount;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SetBonusEffect;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectionWeight;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MyTownWorkerPersonalityData
// 0x0028
struct FMyTownWorkerPersonalityData
{
	struct FGameplayTagContainer                       PersonalityTypeTag;                                        // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       PersonalityName;                                           // 0x0018(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                SelectionWeight;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MyTownColorBannerData
// 0x0008
struct FMyTownColorBannerData
{
	float                                              Position;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MyTownBannerData
// 0x00E8
struct FMyTownBannerData
{
	struct FSlateBrush                                 BigBannerImage;                                            // 0x0000(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SmallBannerImage;                                          // 0x0074(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPublicAccountInfo
// 0x0018
struct FFortPublicAccountInfo
{
	int                                                Level;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLevel;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalXp;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalXpForLevel;                                           // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelXp;                                                   // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelXpForLevel;                                           // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPrivateAccountInfo
// 0x0004 (0x001C - 0x0018)
struct FFortPrivateAccountInfo : public FFortPublicAccountInfo
{
	int                                                MtxBalance;                                                // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortItemQuantityPair
// 0x001C
struct FFortItemQuantityPair
{
	TAssetPtr<class UFortItemDefinition>               ItemDefinition;                                            // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPartyRepState
// 0x0034 (0x003C - 0x0008)
struct FFortPartyRepState : public FPartyState
{
	TEnumAsByte<FortniteGame_EFortPartyState>          PartyProgression;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLobbyConnectionStarted;                                   // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EMatchmakingCompleteResult> MatchmakingResult;                                         // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_60WH[0x1];                                     // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionId;                                                 // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSessionIsCriticalMission;                                 // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J09C[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ZoneTileIndex;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZoneInstanceId;                                            // 0x0020(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TheaterId;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                       TileStates;                                                // 0x0030(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.EncounterEnvironmentQueryInfo
// 0x001C
struct FEncounterEnvironmentQueryInfo
{
	class UEnvQuery*                                   EnvironmentQuery;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KDX8[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsDirectional;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7NCD[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortEncounterPawnNumberCaps
// 0x0010
struct FFortEncounterPawnNumberCaps
{
	bool                                               bApplyPawnNumberCaps;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IXK3[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCurveTableRowHandle>                PawnCapsPerPlayerCount;                                    // 0x0004(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPersistentGameplayStatValue
// 0x0010
struct FFortPersistentGameplayStatValue
{
	struct FString                                     StatName;                                                  // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StatValue;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPersistentGameplayStatContainer
// 0x000C
struct FFortPersistentGameplayStatContainer
{
	TArray<struct FFortPersistentGameplayStatValue>    GameplayStats;                                             // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMcpQuestObjectiveInfo
// 0x0040
struct FFortMcpQuestObjectiveInfo
{
	struct FDataTableRowHandle                         ObjectiveStatHandle;                                       // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>                 AlternativeStatHandles;                                    // 0x000C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0018(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UClass>                            ScriptedAction;                                            // 0x0028(0x0018) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortScriptedActionParams
// 0x0018
struct FFortScriptedActionParams
{
	class AFortPlayerController*                       Player;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortScriptedActionSource> SourceType;                                                // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9PG1[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortItem*                                   SourceItem;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         SourceData;                                                // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortHomeBaseInfo
// 0x011C
struct FFortHomeBaseInfo
{
	int                                                Rating;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PartyRating;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMyTownBannerData                           Banner;                                                    // 0x0008(0x00E8) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       Name;                                                      // 0x0100(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<int>                                        Resources;                                                 // 0x010C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ValidData;                                                 // 0x0118(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XWDG[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.ViewOffsetData
// 0x0024
struct FViewOffsetData
{
	struct FVector                                     OffsetHigh;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OffsetMid;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OffsetLow;                                                 // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortEventNotification
// 0x004C
struct FFortEventNotification
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortEventNotificationPriority> NotificationPriority;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P1CZ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      NotificationClass;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       NotificationTitleText;                                     // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       NotificationText;                                          // 0x001C(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       InputText;                                                 // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       NotificationActionName;                                    // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortEventNotificationParameter> NotificationParamType;                                     // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_091Z[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NotificationDuration;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  OptionalNotificationIcon;                                  // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  OptionalNotificationSound;                                 // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortFeedbackHandle
// 0x0010
struct FFortFeedbackHandle
{
	class UFortFeedbackBank*                           FeedbackBank;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EventName;                                                 // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReadOnly;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBankDefined;                                              // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortFeedbackBroadcastFilter> BroadcastFilterOverride;                                   // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BJR8[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortFeedbackResponse
// 0x0014
struct FFortFeedbackResponse
{
	struct FFortFeedbackHandle                         Handle;                                                    // 0x0000(0x0010) (Edit, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortFeedbackContext>     Context;                                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_86TE[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortFeedbackLine
// 0x005C
struct FFortFeedbackLine
{
	TAssetPtr<class USoundBase>                        Audio;                                                     // 0x0000(0x0018) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UAnimSequence>                     AnimSequence;                                              // 0x0018(0x0018) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UAnimMontage>                      AnimMontage;                                               // 0x0030(0x0018) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortFeedbackAddressee>   Addressee;                                                 // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortFeedbackContext>     Context;                                                   // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJCX[0x2];                                     // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFortFeedbackResponse>               ResponseEvents;                                            // 0x004C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bInterruptCurrentLine;                                     // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCanBeInterrupted;                                         // 0x0059(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCanQue;                                                   // 0x005A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CMVL[0x1];                                     // 0x005B(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.TrackMovement
// 0x000C
struct FTrackMovement
{
	class USplineComponent*                            CurrentSpline;                                             // 0x0000(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceAlongSpline;                                       // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReverseDirectionAlongSpline;                              // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JDCI[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.RepTrackMovement
// 0x0004 (0x0010 - 0x000C)
struct FRepTrackMovement : public FTrackMovement
{
	float                                              TimeStamp;                                                 // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortUIFeedback
// 0x0018
struct FFortUIFeedback
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Audio;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLooping;                                                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U94L[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FadeIn;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOut;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortUIFeedbackBlueprintOnly
// 0x0008 (0x0020 - 0x0018)
struct FFortUIFeedbackBlueprintOnly : public FFortUIFeedback
{
	struct FName                                       EditableName;                                              // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TrackSplineConfig
// 0x0003
struct FTrackSplineConfig
{
	bool                                               bUseSpline;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_ETrackDirection>          Start;                                                     // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_ETrackDirection>          End;                                                       // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TrackSwitchStateConfig
// 0x0028
struct FTrackSwitchStateConfig
{
	struct FTrackPieceConfig                           TrackPiece1;                                               // 0x0000(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FTrackPieceConfig                           TrackPiece2;                                               // 0x0010(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FTrackSplineConfig                          SplineConfig1;                                             // 0x0020(0x0003) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FTrackSplineConfig                          SplineConfig2;                                             // 0x0023(0x0003) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YYR1[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.TrackConfiguration
// 0x0030
struct FTrackConfiguration
{
	TArray<bool>                                       NeighborsByDirection;                                      // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FTrackSwitchStateConfig>             SwitchStates;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FRotator                                    SwitchRotation;                                            // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     SwitchOffset;                                              // 0x0024(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.VisibilityTestPoint
// 0x0010
struct FVisibilityTestPoint
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         Component;                                                 // 0x000C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAbilityCanHitParameters
// 0x0010
struct FFortAbilityCanHitParameters
{
	unsigned char                                      UnknownData_M60O[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.ContainerStatInfo
// 0x000C
struct FContainerStatInfo
{
	int                                                NumSpawned;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSearched;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumDestroyedWithoutSearch;                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.NpcStatInfo
// 0x0010
struct FNpcStatInfo
{
	int                                                NumSpawned;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumKilled;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumDespawnedNormally;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumDespawnedDueToInactivity;                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortGameplayEffectModifierDescription
// 0x0018
struct FFortGameplayEffectModifierDescription
{
	struct FGameplayAttribute                          ModAttribute;                                              // 0x0000(0x0004) (NativeAccessSpecifierPublic)
	struct FText                                       ModDescription;                                            // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsBuff;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAttributeDisplay>    MagnitudeFormat;                                           // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortStatDisplayType>     DisplayType;                                               // 0x0012(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MAPZ[0x1];                                     // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Magnitude;                                                 // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.DamagerInfoAnalytics
// 0x0010
struct FDamagerInfoAnalytics
{
	struct FString                                     DamageCauser;                                              // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageAmount;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIPawnStats
// 0x0180 (0x01B0 - 0x0030)
struct FFortAIPawnStats : public FFortPawnStats
{
	float                                              MinProximityNotifyDistXY;                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ProximityNotifyDistXY;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ProximityNotifyDistZ;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCanOpenDoors;                                             // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bStopOnMelee;                                              // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bPauseAfterMelee;                                          // 0x003E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bPerformMeleeLungeAttacks;                                 // 0x003F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              HostilityAdjustmentDeathFixed;                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HostilityAdjustmentDeathScaled;                            // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ScoreValue;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DormantSightRadius;                                        // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DormantHearingThreshold;                                   // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DormantLOSHearingThreshold;                                // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DormantPeripheralVisionAngle;                              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DormantNightAlwaysSenseRadius;                             // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AlertSightRadius;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AlertHearingThreshold;                                     // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AlertLOSHearingThreshold;                                  // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AlertPeripheralVisionAngle;                                // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AutoSuccessRangeFromLastSeenLocation;                      // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SuicideDamage;                                             // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ShortRange;                                                // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MediumRange;                                               // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LongRange;                                                 // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                                 HealthScalingTable;                                        // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       HealthScalingTableRow;                                     // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat1;                                            // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat1;                                             // 0x0094(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat2;                                            // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat2;                                             // 0x00A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat3;                                            // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat3;                                             // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat4;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat4;                                             // 0x00C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat5;                                            // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat5;                                             // 0x00D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat6;                                            // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat6;                                             // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat7;                                            // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat7;                                             // 0x00F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat8;                                            // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat8;                                             // 0x0104(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat9;                                            // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat9;                                             // 0x0114(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat10;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat10;                                            // 0x0124(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat11;                                           // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat11;                                            // 0x0134(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat12;                                           // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat12;                                            // 0x0144(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat13;                                           // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat13;                                            // 0x0154(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat14;                                           // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat14;                                            // 0x0164(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat15;                                           // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat15;                                            // 0x0174(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WildcardFloat16;                                           // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentFloat16;                                            // 0x0184(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                WildcardInt1;                                              // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentInt1;                                               // 0x0194(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                WildcardInt2;                                              // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CommentInt2;                                               // 0x01A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.RunVariationData
// 0x000C
struct FRunVariationData
{
	TWeakObjectPtr<class AFortAIPawn>                  FortAIPawn;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortEncounterAIDirectorFactor
// 0x000C
struct FFortEncounterAIDirectorFactor
{
	float                                              CurrentValue;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatedPeriodValue;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalPeriodTime;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortIntensityCurve
// 0x0020
struct FFortIntensityCurve : public FTableRowBase
{
	class UCurveTable*                                 IntensityCurveTable;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       IntensityCurveTableRow;                                    // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LowPlayerPerformancePeakIntensityThreshold;                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NormalPlayerPerformancePeakIntensityThreshold;             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HighPlayerPerformancePeakIntensityThreshold;               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxRampTime;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeEndIntensityThreshold;                                 // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortSpawnPointsPercentageCurve
// 0x0010
struct FFortSpawnPointsPercentageCurve : public FTableRowBase
{
	class UCurveTable*                                 SpawnPointsPercentageCurveTable;                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       SpawnPointsPercentageCurveTableRow;                        // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxRampTime;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortEncounterSettings
// 0x0030
struct FFortEncounterSettings
{
	TArray<TEnumAsByte<FortniteGame_EFortEncounterDirection>> ForbiddenSpawnDirections;                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bRiftsDestroyPlayerBuiltBuildings;                         // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMustFindSpawnPoints;                                      // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6DXO[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumRiftsToUseOverride;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQuery*                                   RiftSelectionQuery;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ScriptedSpawnPoints;                                       // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              WorkingScriptedSpawnPoints;                                // 0x0024(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIEncounterRiftManagerInitializationData
// 0x0078
struct FFortAIEncounterRiftManagerInitializationData
{
	class UFortAIEncounterInfo*                        EncounterInfo;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortEncounterSettings                      EncounterSettings;                                         // 0x0004(0x0030) (NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo              CurrentEnvironmentQueryInfo;                               // 0x0034(0x001C) (NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo              FallbackEnvironmentQueryInfo;                              // 0x0050(0x001C) (NativeAccessSpecifierPublic)
	class UClass*                                      RiftClassTemplate;                                         // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumRiftsToUse;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinRiftsToUse;                                             // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIGoalInfo
// 0x0018
struct FFortAIGoalInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bActorAlwaysPerceived;                                     // 0x0014(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bAllowsUndermining;                                        // 0x0015(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4T07[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.AIAssignmentInfo
// 0x0070
struct FAIAssignmentInfo
{
	TWeakObjectPtr<class UFortAIAssignment>            CurrentAssignment;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFortAIGoalInfo                             CurrentGoal;                                               // 0x0008(0x0018) (NativeAccessSpecifierPrivate)
	float                                              TimeCurrentGoalWasChosen;                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TimeExitedLastAssignmentOfType[0x4];                       // 0x0024(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortAIAssignment>            PreviousAssignment;                                        // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFortAIGoalInfo                             PreviousGoal;                                              // 0x003C(0x0018) (NativeAccessSpecifierPrivate)
	bool                                               bWaitingForQueryResponse;                                  // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bSuppressGoalUpdates;                                      // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5BO1[0x1A];                                    // 0x0056(0x001A) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.AIDiscouragedGoalTimer
// 0x0024
struct FAIDiscouragedGoalTimer
{
	struct FFortAIGoalInfo                             DiscouragedGoalInfo;                                       // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	double                                             ExpirationTime;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NumberOfTimesMarkedForDiscouragement;                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortVariantSpawnPoints
// 0x0004
struct FFortVariantSpawnPoints : public FTableRowBase
{
	int                                                BudgetPoints;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ScoreMultiplierRow
// 0x007C
struct FScoreMultiplierRow : public FTableRowBase
{
	float                                              CombatMultiplier;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BuildingMultiplier;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              UtilityMultiplier;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BadgeMultiplier;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MonsterKills;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MonsterDamagePoints;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PlayerKills;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                WoodGathered;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                StoneGathered;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MetalGathered;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Deaths;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsBuilt;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsBuilt_Wood;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsBuilt_Stone;                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsBuilt_Metal;                                      // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsUpgraded_Wood2;                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsUpgraded_Wood3;                                   // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsUpgraded_Stone2;                                  // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsUpgraded_Stone3;                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsUpgraded_Metal2;                                  // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsUpgraded_Metal3;                                  // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BuildingsDestroyed;                                        // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Repair_Wood;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Repair_Stone;                                              // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Repair_Metal;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                FlagsCaptured;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                FlagsReturned;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ContainersLooted;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CraftingPoints;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TrapPlacementPoints;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TrapActivationPoints;                                      // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.WorldItemAndMinMaxCount
// 0x001C
struct FWorldItemAndMinMaxCount
{
	struct FCurveTableRowHandle                        MinCurveTable;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        MaxCurveTable;                                             // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortWorldItemDefinition*                    Item;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ItemAndCount
// 0x0008
struct FItemAndCount
{
	int                                                Count;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                         Item;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTraitCostData
// 0x0014
struct FFortTraitCostData : public FTableRowBase
{
	int                                                One;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Two;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Three;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Four;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Five;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortLevelUpData
// 0x001C
struct FFortLevelUpData : public FTableRowBase
{
	int                                                XP;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemRewardsText;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MaximumXPMultBonusTier;                                    // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PowerPointCalculationData
// 0x0024
struct FPowerPointCalculationData : public FTableRowBase
{
	float                                              HeroBasePowerPoints;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PowerPointsPerDifficultyPoint;                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHealthPerPowerPoint;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxStaminaPerPowerPoint;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RunSpeedPerPowerPoint;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SprintSpeedPerPowerPoint;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamagePerPowerPoint;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FakeHeroDamagePowerPointValue;                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeaponPPPerOtherPP;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PlayerBuildableClassFilter
// 0x000C
struct FPlayerBuildableClassFilter
{
	TEnumAsByte<FortniteGame_EFortResourceType>        ResourceType;                                              // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortBuildingType>        BuildingType;                                              // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RVI8[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Level;                                                     // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBuildingEditModeMetadata*                   EditModeMetadata;                                          // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortHealthBarComponentData
// 0x000C
struct FFortHealthBarComponentData
{
	struct FText                                       DisplayText;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.HomebaseBuildingDataTableRow
// 0x0058
struct FHomebaseBuildingDataTableRow : public FTableRowBase
{
	int                                                MinRating;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Attribute;                                                 // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Operation;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Magnitude;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequiredSourceTags;                                        // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequiredTargetTags;                                        // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ApplicationRequiredTags;                                   // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 MagnitudeDataTable;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MagnitudeCategory;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PowerPointValue;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PowerPointClassTagFilter;                                  // 0x004C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.HomebaseBuildingStaticDataTableRow
// 0x0074
struct FHomebaseBuildingStaticDataTableRow : public FTableRowBase
{
	struct FName                                       BuildingName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BuildingLevel;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Attribute;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Operation;                                                 // 0x0014(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Magnitude;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ApplicationRequiredTags;                                   // 0x0020(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequiredSourceTags;                                        // 0x002C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequiredTargetTags;                                        // 0x0038(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MagnitudeAttribute;                                        // 0x0044(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 MagnitudeDataTable;                                        // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MagnitudeCategory;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GrantedTags;                                               // 0x0058(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PowerPointValue;                                           // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PowerPointClassTagFilter;                                  // 0x0068(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortBadgeScoringData
// 0x0008
struct FFortBadgeScoringData : public FTableRowBase
{
	int                                                ScoreAwarded;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MissionPoints;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortLootLevelData
// 0x0014
struct FFortLootLevelData : public FTableRowBase
{
	struct FName                                       Category;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LootLevel;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinItemLevel;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxItemLevel;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortLootPackageData
// 0x0064
struct FFortLootPackageData : public FTableRowBase
{
	struct FName                                       LootPackageID;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LootPackageCategory;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RequiredTag;                                               // 0x0014(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LootPackageCall;                                           // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UFortItemDefinition>               ItemDefinition;                                            // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PersistentLevel;                                           // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinWorldLevel;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxWorldLevel;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowBonusDrops;                                          // 0x0054(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KA2J[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Annotation;                                                // 0x0058(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortLootTierData
// 0x007C
struct FFortLootTierData : public FTableRowBase
{
	struct FName                                       TierGroup;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_ELootQuotaLevel>          QuotaLevel;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QPB5[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LootTier;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinWorldLevel;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxWorldLevel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StreakBreakerCurrency;                                     // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StreakBreakerPointsMin;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StreakBreakerPointsMax;                                    // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StreakBreakerPointsSpend;                                  // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RequiredTag;                                               // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LootPackage;                                               // 0x003C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LootPreviewPackage;                                        // 0x0044(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NumLootPackageDrops;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                                 LootPackageCategoryData;                                   // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LootPackageCategoryWeightRowName;                          // 0x0054(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LootPackageCategoryMinRowName;                             // 0x005C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LootPackageCategoryMaxRowName;                             // 0x0064(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowBonusLootDrops;                                      // 0x006C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_58H7[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Annotation;                                                // 0x0070(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.QueuedMusic
// 0x000C
struct FQueuedMusic
{
	unsigned char                                      UnknownData_QQXU[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.OutpostCraftingTableData
// 0x0014
struct FOutpostCraftingTableData : public FTableRowBase
{
	int                                                Level;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequiredItems;                                             // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.OutpostDisintegrationData
// 0x001C
struct FOutpostDisintegrationData : public FTableRowBase
{
	TAssetPtr<class UFortWorldItemDefinition>          ItemDefinition;                                            // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisintegrationValue;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.OutpostItemUpgradeData
// 0x0034
struct FOutpostItemUpgradeData : public FTableRowBase
{
	TAssetPtr<class UFortOutpostItemDefinition>        ItemDefinition;                                            // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemLevel;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequiredItems;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequiredAccountItems;                                      // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TransparentActorInfo
// 0x000C
struct FTransparentActorInfo
{
	unsigned char                                      UnknownData_KNZV[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortDestroyedActorRecord
// 0x0050
struct FFortDestroyedActorRecord
{
	struct FGuid                                       ActorGuid;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      ActorClass;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E53T[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ActorTransform;                                            // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortBuildingActorArray
// 0x000C
struct FFortBuildingActorArray
{
	TArray<struct FFortDestroyedActorRecord>           ActorRecords;                                              // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTaggedActorOctreeFilter
// 0x0040
struct FFortTaggedActorOctreeFilter
{
	struct FBoxSphereBounds                            Bounds;                                                    // 0x0000(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinDistanceFromBoundsCenter;                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      OptionalSubclass;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TagsToLookFor;                                             // 0x0024(0x0018) (NativeAccessSpecifierPublic)
	bool                                               bHasAllTags;                                               // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_98QF[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortMissionInfoTagRequirementReplacement
// 0x003C
struct FFortMissionInfoTagRequirementReplacement
{
	unsigned char                                      UnknownData_UFNB[0x3C];                                    // 0x0000(0x003C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.VelocityGridStrokeData
// 0x0001
struct FVelocityGridStrokeData
{
	unsigned char                                      UnknownData_KYF1[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.VelocityGridStrokeSubData
// 0x0001
struct FVelocityGridStrokeSubData
{
	unsigned char                                      UnknownData_RGTJ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.TileLootQuota
// 0x000C
struct FTileLootQuota : public FTableRowBase
{
	int                                                Min;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Quota;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.LootQuota
// 0x0004 (0x0010 - 0x000C)
struct FLootQuota : public FTileLootQuota
{
	TEnumAsByte<FortniteGame_ELootQuotaLevel>          QuotaLevel;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H4CN[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortTeamMemberInfo
// 0x01E8
struct FFortTeamMemberInfo
{
	struct FUniqueNetIdRepl                            MemberUniqueId;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            PartyLeaderUniqueId;                                       // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       PlayerName;                                                // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bPartyLeader;                                              // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsInZone;                                                 // 0x001D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T855[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPlayersInParty;                                         // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerIndex;                                               // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortTeam>                TeamAffiliation;                                           // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8J9Q[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       HeroClass;                                                 // 0x002C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       HeroLevel;                                                 // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                HeroXP;                                                    // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                                   HeroItem;                                                  // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItem*>                           SelectedGadgetItems;                                       // 0x004C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HeroIcon;                                                  // 0x0058(0x0074) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortHomeBaseInfo                           HomeBaseInfo;                                              // 0x00CC(0x011C) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortQuestObjectiveStatTableRow
// 0x0074
struct FFortQuestObjectiveStatTableRow : public FTableRowBase
{
	TEnumAsByte<FortniteGame_EFortQuestObjectiveType>  Type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ARQC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TargetTags;                                                // 0x0004(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SourceTags;                                                // 0x0010(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextTags;                                               // 0x001C(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TargetTagContainer;                                        // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SourceTagContainer;                                        // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ContextTagContainer;                                       // 0x0058(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	int                                                IntParameter;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionInstancedConfigDataBucket
// 0x000C
struct FFortMissionInstancedConfigDataBucket
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008) (Transient, NativeAccessSpecifierPublic)
	class UFortMissionConfigData*                      ConfigData;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionInstancedConfigData
// 0x000C
struct FFortMissionInstancedConfigData
{
	TArray<struct FFortMissionInstancedConfigDataBucket> ConfigDataBuckets;                                         // 0x0000(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortQuestReward
// 0x0008
struct FFortQuestReward
{
	class UFortItem*                                   Item;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortQuestObjectiveCompletion
// 0x0014
struct FFortQuestObjectiveCompletion
{
	struct FString                                     StatName;                                                  // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortQuestObjectiveType>  ObjectiveType;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZKWE[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Count;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.QuickBarSlotData
// 0x0028
struct FQuickBarSlotData
{
	TArray<TEnumAsByte<FortniteGame_EFortItemType>>    AcceptedItemTypes;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bStaticSlot;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XXWF[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TAssetPtr<class UFortWorldItemDefinition>          DefaultItem;                                               // 0x0010(0x0018) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTheaterMissionWeight
// 0x001C
struct FFortTheaterMissionWeight
{
	TAssetPtr<class UClass>                            MissionGenerator;                                          // 0x0000(0x0018) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTheaterDifficultyWeight
// 0x001C
struct FFortTheaterDifficultyWeight
{
	struct FDataTableRowHandle                         DifficultyInfo;                                            // 0x0000(0x000C) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FString                                     LootTierGroup;                                             // 0x000C(0x000C) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTheaterMapMissionData
// 0x0024
struct FFortTheaterMapMissionData
{
	TArray<struct FFortTheaterMissionWeight>           MissionWeights;                                            // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterDifficultyWeight>        DifficultyWeights;                                         // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                NumMissionsAvailable;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumMissionsToChange;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MissionChangeFrequency;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTheaterMapTileData
// 0x005C
struct FFortTheaterMapTileData
{
	TEnumAsByte<FortniteGame_EFortTheaterMapTileType>  TileType;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4D8D[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TAssetPtr<class UClass>                            ZoneTheme;                                                 // 0x0004(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                       Requirements;                                              // 0x001C(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                XCoordinate;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                YCoordinate;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterMissionWeight>           MissionWeightOverrides;                                    // 0x0044(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterDifficultyWeight>        DifficultyWeightOverrides;                                 // 0x0050(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTheaterMapRegionData
// 0x008C
struct FFortTheaterMapRegionData
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RegionTags;                                                // 0x000C(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<int>                                        TileIndices;                                               // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TAssetPtr<class USlateBrushAsset>                  RegionThemeIcon;                                           // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTheaterMapMissionData                  MissionData;                                               // 0x0048(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                       Requirements;                                              // 0x006C(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTheaterColorInfo
// 0x0020
struct FFortTheaterColorInfo
{
	bool                                               bUseDifficultyToDetermineColor;                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E58E[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 Color;                                                     // 0x0004(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTheaterRuntimeData
// 0x008C
struct FFortTheaterRuntimeData
{
	TEnumAsByte<FortniteGame_EFortTheaterType>         TheaterType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VBMB[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TheaterTags;                                               // 0x0004(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                       TheaterVisibilityRequirements;                             // 0x001C(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                       Requirements;                                              // 0x003C(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      WorldMapPinClass;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  TheaterImage;                                              // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTheaterColorInfo                       TheaterColorInfo;                                          // 0x0064(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       Socket;                                                    // 0x0084(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTheaterMapData
// 0x00D0
struct FFortTheaterMapData
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FString                                     UniqueId;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TheaterSlot;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTestTheater;                                            // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BTY7[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description;                                               // 0x0020(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortTheaterRuntimeData                     RuntimeInfo;                                               // 0x002C(0x008C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterMapTileData>             Tiles;                                                     // 0x00B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterMapRegionData>           Regions;                                                   // 0x00C4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTheaterTileEditorData
// 0x004C
struct FFortTheaterTileEditorData
{
	int                                                XCoordinate;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                YCoordinate;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ZoneTheme;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortRegionInfo*                             Region;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                       Requirements;                                              // 0x0010(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortTheaterMapTileType>  TileType;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FUOZ[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFortTheaterMissionWeight>           MissionWeightOverrides;                                    // 0x0034(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterDifficultyWeight>        DifficultyWeightOverrides;                                 // 0x0040(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPlacementActorFinderEntry
// 0x0068
struct FFortPlacementActorFinderEntry
{
	TAssetPtr<class UClass>                            BuildingToSpawn;                                           // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredTags;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       PreferredTags;                                             // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ExlusionTags;                                              // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      BuildingClassToReplace;                                    // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreCollisionCheck;                                     // 0x0064(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSnapToGrid;                                               // 0x0065(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9K5K[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortPlacementActorFinderInfo
// 0x0014
struct FFortPlacementActorFinderInfo
{
	float                                              DistanceRangeMin;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceRangeMax;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortPlacementActorFinderEntry>      BuildingData;                                              // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionEvent
// 0x006C
struct FFortMissionEvent
{
	struct FName                                       EventType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ObjectiveHandle;                                           // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                                     EventFocus;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataAsset*                                  EventContent;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      EventInstigator;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GenericInt;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GenericFloat;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       GenericText;                                               // 0x0034(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGuid                                       MissionGuid;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFortMissionEventParams*                     Params;                                                    // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.AIDirectorDebugInfo
// 0x0020
struct FAIDirectorDebugInfo
{
	float                                              TimeStamp;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      DebugGraphData;                                            // 0x0004(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EN0S[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.LastBuildableState
// 0x000C
struct FLastBuildableState
{
	class UBuildingEditModeMetadata*                   LastBuildableMetaData;                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LastBuildableMirrored;                                     // 0x0004(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1JK3[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LastBuildableRotationIterations;                           // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.RecentDamagedBuildingInfo
// 0x0010
struct FRecentDamagedBuildingInfo
{
	TWeakObjectPtr<class ABuildingSMActor>             Building;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              LastDamagedTime;                                           // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UndistributedResources;                                    // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortDamageNumberInfo
// 0x0058
struct FFortDamageNumberInfo
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsCriticalDamage;                                         // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DHNK[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Damage;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortDamageNumberType>    DamageNumberType;                                          // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJD9[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VisualDamageScale;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortElementalDamageType> ElementalDamageType;                                       // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T812[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        StaticMeshComponent;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>            MeshMIDs;                                                  // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        DamageNumberArray;                                         // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       DamagedActor;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APawn>                        DamageCauser;                                              // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAdvancementInfo
// 0x0020
struct FFortAdvancementInfo
{
	struct FString                                     TemplateName;                                              // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceId;                                                // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XP;                                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortGiftingInfo
// 0x0018
struct FFortGiftingInfo
{
	struct FString                                     PlayerName;                                                // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortHeroType*                               HeroType;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3K5V[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortItemEntryStateValue
// 0x0010
struct FFortItemEntryStateValue
{
	int                                                IntValue;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       NameValue;                                                 // 0x0004(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TEnumAsByte<FortniteGame_EFortItemEntryState>      StateType;                                                 // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7LVI[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortItemEntry
// 0x0070 (0x007C - 0x000C)
struct FFortItemEntry : public FFastArraySerializerItem
{
	int                                                Count;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDefinition*                         ItemDefinition;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Durability;                                                // 0x0014(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Level;                                                     // 0x0018(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                LoadedAmmo;                                                // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortAlterationItemDefinition*>       AlterationDefinitions;                                     // 0x0020(0x000C) (ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	struct FString                                     ItemSource;                                                // 0x002C(0x000C) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       ItemGuid;                                                  // 0x0038(0x0010) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bInOverflow;                                               // 0x0048(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bInStorageVault;                                           // 0x0049(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bIsReplicatedCopy;                                         // 0x004A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bIsDirty;                                                  // 0x004B(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FFortGiftingInfo                            GiftingInfo;                                               // 0x004C(0x0018) (NativeAccessSpecifierPrivate)
	TArray<struct FFortItemEntryStateValue>            StateValues;                                               // 0x0064(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AFortInventory>               ParentInventory;                                           // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FGameplayAbilitySpecHandle                  GameplayAbilitySpecHandle;                                 // 0x0078(0x0004) (Transient, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortRewardActivity
// 0x004C
struct FFortRewardActivity
{
	TEnumAsByte<FortniteGame_EFortRewardActivityType>  ActivityType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9J0U[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       ActivityGuid;                                              // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       TitleText;                                                 // 0x0014(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	struct FText                                       DescriptionText;                                           // 0x0020(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	float                                              RewardDisplayTime;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortItemEntry>                      RewardItems;                                               // 0x0030(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortItemEntry>                      MissedRewardItems;                                         // 0x003C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortCompletionResult>    ActivityCompletionResult;                                  // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_268T[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortUpdatedObjectiveStat
// 0x0010
struct FFortUpdatedObjectiveStat
{
	class UFortQuestItemDefinition*                    Quest;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ObjectiveStatName;                                         // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StatValue;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCrackEffectData
// 0x0020
struct FFortCrackEffectData
{
	struct FVector_NetQuantizeNormal                   Normal;                                                    // 0x0000(0x000C) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Position;                                                  // 0x000C(0x000C) (NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPhysicalSurface>               SurfaceType;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XPT8[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFortCrackEffect*                            OldCrackEffect;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.BuildingClassData
// 0x000C
struct FBuildingClassData
{
	class UClass*                                      BuildingClass;                                             // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviousBuildingLevel;                                     // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UpgradeLevel;                                              // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ChoiceDataEntry
// 0x0028
struct FChoiceDataEntry
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       ButtonDescription;                                         // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       ConfirmText;                                               // 0x0018(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRequireConfirmation;                                      // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCloseAfterSelection;                                      // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GA99[0x1];                                     // 0x0027(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortTextFormatData
// 0x0054
struct FFortTextFormatData
{
	struct FText                                       DisplayText;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	struct FText                                       PawnName1;                                                 // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	struct FText                                       PawnName2;                                                 // 0x0018(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	struct FText                                       ItemName;                                                  // 0x0024(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	struct FText                                       ItemBaseName;                                              // 0x0030(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	float                                              DisplayValue;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AFortPlayerState>             PlayerState1;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AFortPlayerState>             PlayerState2;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortItemDefinition*                         ItemDefinition;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortClientNotificationData
// 0x0114
struct FFortClientNotificationData
{
	class UClass*                                      NotificationType;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OverrideDisplayBrush;                                      // 0x0004(0x0074) (NativeAccessSpecifierPublic)
	float                                              OverrideDisplayTime;                                       // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       OverrideTitleText;                                         // 0x007C(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	class USoundBase*                                  OverrideSound;                                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlaySoundAsFeedback;                                      // 0x008C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TAXD[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ActionName;                                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTreatAsUnique;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bDestroyAfterViewing;                                      // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHighPriority;                                             // 0x009A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bStopViewing;                                              // 0x009B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortTextFormatData                         TextData;                                                  // 0x009C(0x0054) (NativeAccessSpecifierPublic)
	bool                                               bViewedByPlayer;                                           // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFinishedViewing;                                          // 0x00F1(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWaitForClients;                                           // 0x00F2(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FUQJ[0x1];                                     // 0x00F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       NotificationID;                                            // 0x00F4(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AFortUIBypassNotification*                   NotificationActor;                                         // 0x0104(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ClientFormattedOverrideText;                               // 0x0108(0x0018) ELEMENT_SIZE_MISMATCH (RepSkip, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortTutorialNotificationData
// 0x0030 (0x0144 - 0x0114)
struct FFortTutorialNotificationData : public FFortClientNotificationData
{
	struct FText                                       OverrideNameText;                                          // 0x0114(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	struct FText                                       OverrideSystemText;                                        // 0x0120(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	bool                                               bOverrideButtonEnabled;                                    // 0x012C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOverrideLightboxEnabled;                                  // 0x012D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOverrideLightboxDisableInputOnly;                         // 0x012E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BTFQ[0x1];                                     // 0x012F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     OverridePadding;                                           // 0x0130(0x0010) (NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          OverrideVAlign;                                            // 0x0140(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        OverrideHAlign;                                            // 0x0141(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GPX4[0x2];                                     // 0x0142(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.SpawnPickupEntry
// 0x0010
struct FSpawnPickupEntry
{
	struct FString                                     Name;                                                      // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PickupClass;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortEventName
// 0x0010
struct FFortEventName
{
	struct FName                                       CategoryName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EventName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortClientEventName
// 0x0000 (0x0010 - 0x0010)
struct FFortClientEventName : public FFortEventName
{

};

// ScriptStruct FortniteGame.CombatEventMultiplier
// 0x0008
struct FCombatEventMultiplier
{
	TEnumAsByte<FortniteGame_EFortCombatEvents>        CombatEvent;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GHU1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxContribution;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.CombatFactorData
// 0x002C
struct FCombatFactorData
{
	TArray<struct FCombatEventMultiplier>              ContributingCombatEvents;                                  // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DebugFactorName;                                           // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DebugGraphColor;                                           // 0x001C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.VisibilityInfo
// 0x0008 (0x0014 - 0x000C)
struct FVisibilityInfo : public FFastArraySerializerItem
{
	class AActor*                                      Actor;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           TeamVisibilityFlag;                                        // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_34OE[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.VisibiltyInfoArray
// 0x000C (0x008C - 0x0080)
struct FVisibiltyInfoArray : public FFastArraySerializer
{
	TArray<struct FVisibilityInfo>                     VisibilityInfoArray;                                       // 0x0080(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortLevelStreamingInfo
// 0x000C
struct FFortLevelStreamingInfo
{
	struct FName                                       PackageName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortLevelStreamingState> LevelState;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EZTT[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortLootQuotaData
// 0x0018
struct FFortLootQuotaData : public FTableRowBase
{
	struct FName                                       QuotaCategory;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_ELootQuotaLevel>          QuotaLevel;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IZBD[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Min;                                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Quota;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTileLootData
// 0x00E0
struct FFortTileLootData
{
	struct FFortLootQuotaData                          LootQuotas[0x8];                                           // 0x0000(0x00C0) (NativeAccessSpecifierPublic)
	int                                                LootDrops[0x8];                                            // 0x00C0(0x0020) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.WorldTileSubArray
// 0x000C
struct FWorldTileSubArray
{
	TArray<class AWorldTileFoundation*>                X;                                                         // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortStartingMissionInfo
// 0x000C
struct FFortStartingMissionInfo
{
	TArray<class UFortMissionInfo*>                    StartingMissions;                                          // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortDeferredNewActorData
// 0x000C
struct FFortDeferredNewActorData
{
	class ABuildingActor*                              BuildingActor;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SavedLevelIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ActorRecordIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.CameraPair
// 0x0008
struct FCameraPair
{
	TEnumAsByte<FortniteGame_EFrontEndCamera>          Type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H230[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFortCameraBase*                             Camera;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.QuickBarSlot
// 0x000C
struct FQuickBarSlot
{
	TArray<struct FGuid>                               Items;                                                     // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.InterpOffsetData
// 0x001C
struct FInterpOffsetData
{
	struct FVector                                     ViewOffset;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LargeBodyTypeAddtnlOffset;                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              PitchAngle;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.InterpOffset
// 0x000C
struct FInterpOffset
{
	TArray<struct FInterpOffsetData>                   SamplePoints;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.QuickBarData
// 0x000C
struct FQuickBarData
{
	TArray<struct FQuickBarSlotData>                   QuickbarSlots;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.QuickBar
// 0x0020
struct FQuickBar
{
	int                                                CurrentFocusedSlot;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviousFocusedSlot;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQuickBarSlot>                       Slots;                                                     // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FQuickBarData                               DataDefinition;                                            // 0x0014(0x000C) (NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortObjectiveEntry
// 0x0038
struct FFortObjectiveEntry
{
	TAssetPtr<class UClass>                            ObjectiveRef;                                              // 0x0000(0x0018) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBadgeItemDefinition*                    ObjectiveRewardBadge;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortObjectiveRequirement> MissionRequirement;                                        // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DD6W[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       ObjectiveHandle;                                           // 0x0020(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortObjectiveBlock
// 0x000C
struct FFortObjectiveBlock
{
	TArray<struct FFortObjectiveEntry>                 ObjectiveEntries;                                          // 0x0000(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ConnectivityCube
// 0x00A8
struct FConnectivityCube
{
	unsigned char                                      UnknownData_2588[0xA8];                                    // 0x0000(0x00A8) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.DormantSpawnInfo
// 0x0028
struct FDormantSpawnInfo
{
	class UClass*                                      DormantEnemyVariant;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GroupWeight;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ExcludedGameplayTags;                                      // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                MinSpawns;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSpawns;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.NavAgentData
// 0x002C
struct FNavAgentData
{
	struct FName                                       AgentName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        AgentAttackCount;                                          // 0x0008(0x000C) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        DamageHandle;                                              // 0x0014(0x000C) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         SurfaceDamageRatioHandle;                                  // 0x0020(0x000C) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortTargetFilter
// 0x0014
struct FFortTargetFilter
{
	TEnumAsByte<FortniteGame_EFortTargetSelectionFilter> ActorTypeFilter;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STBV[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ActorClassFilter;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExcludeInstigator;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExcludeRequester;                                         // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExcludeAllAttachedToInstigator;                           // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExcludeAllAttachedToRequester;                            // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExcludePawnFriends;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExcludePawnEnemies;                                       // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExcludeNonPawnFriends;                                    // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExcludeNonPawnEnemies;                                    // 0x000F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExcludeWithoutNavigationCorridor;                         // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExcludeNonPlayerBuiltPieces;                              // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExcludePlayerBuiltPieces;                                 // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bTraceComplexCollision;                                    // 0x0013(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAbilityTargetSelection
// 0x004C
struct FFortAbilityTargetSelection
{
	TEnumAsByte<FortniteGame_EFortTargetSelectionShape> Shape;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3C46[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CustomShapeComponentName;                                  // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortTargetSelectionTestType> TestType;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAbilityTargetingSource> PrimarySource;                                             // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAbilityTargetingSource> SecondarySource;                                           // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_498X[0x1];                                     // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Range;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HalfExtents;                                               // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ConeYawAngle;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConePitchAngle;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConeMinRadius;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTargetFilter                           TargetFilter;                                              // 0x0030(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bExcludeObstructedByWorld;                                 // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCreateHitResultWhenNoTargetsFound;                        // 0x0045(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAbilityTargetSelectionUsage> TargetSelectionUsage;                                      // 0x0046(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TGND[0x1];                                     // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxTargets;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAbilityTargetSelectionList
// 0x001C
struct FFortAbilityTargetSelectionList
{
	TArray<struct FFortAbilityTargetSelection>         List;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bStopAtFirstSuccess;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseWeaponRanges;                                          // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FW75[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxYawAngleToTarget;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMaxYawAngleToTarget;                                   // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U4NV[0x7];                                     // 0x0015(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortAbilityCost
// 0x0020
struct FFortAbilityCost
{
	TEnumAsByte<FortniteGame_EFortAbilityCostSource>   CostSource;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EU2N[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScalableFloat                              CostValue;                                                 // 0x0004(0x0014) (Edit, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                         ItemDefinition;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyApplyCostOnHit;                                       // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F61N[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortGameplayAbilityBehaviorDistanceData
// 0x001C
struct FFortGameplayAbilityBehaviorDistanceData
{
	struct FGameplayTagContainer                       DistanceDataTag;                                           // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIAssignmentIdentifier
// 0x0020
struct FFortAIAssignmentIdentifier
{
	TEnumAsByte<FortniteGame_EAssignmentType>          AssignmentType;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PP7A[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       AssignmentGameplayTags;                                    // 0x0004(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortTeam>                AssignmentTeam;                                            // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I189[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortAIGoal
// 0x0010 (0x0028 - 0x0018)
struct FFortAIGoal : public FFortAIGoalInfo
{
	class UFortAIAssignment*                           UnderminingAssignment;                                     // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AFortAIController*>                   ControllersAssignedToGoal;                                 // 0x001C(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.ThreatLocationInfo
// 0x0048 (0x0054 - 0x000C)
struct FThreatLocationInfo : public FFastArraySerializerItem
{
	struct FVector                                     CloudLocation;                                             // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        ThreatVolume;                                              // 0x0018(0x001C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AFortThreatVisualsManager*                   ThreatVisualsManager;                                      // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AThreatCloud>                 CloudActor;                                                // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVHU[0x4];                                     // 0x0040(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CloudBuildUpTime;                                          // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SLJE[0xC];                                     // 0x0048(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.ThreatLocationArray
// 0x000C (0x008C - 0x0080)
struct FThreatLocationArray : public FFastArraySerializer
{
	TArray<struct FThreatLocationInfo>                 Locations;                                                 // 0x0080(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMultiSizeMargin
// 0x0060
struct FFortMultiSizeMargin
{
	struct FMargin                                     Margin_XXS;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin_XS;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin_S;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin_M;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin_L;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin_XL;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMultiSizeFont
// 0x00F0
struct FFortMultiSizeFont
{
	struct FSlateFontInfo                              Font_XXS;                                                  // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font_XS;                                                   // 0x0028(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font_S;                                                    // 0x0050(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font_M;                                                    // 0x0078(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font_L;                                                    // 0x00A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font_XL;                                                   // 0x00C8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MMAttemptState
// 0x000C
struct FMMAttemptState
{
	int                                                BestSessionIdx;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSearchResults;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EMatchmakingState>        State;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> LastBeaconResponse;                                        // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OL9B[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortEditorTheaterMapRegionColor
// 0x0014
struct FFortEditorTheaterMapRegionColor
{
	class UFortRegionInfo*                             Region;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                RegionColor;                                               // 0x0004(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAvailableMissionData
// 0x0060
struct FFortAvailableMissionData
{
	struct FString                                     MissionGuid;                                               // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMcpLootResult                              MissionRewards;                                            // 0x000C(0x0024) (NativeAccessSpecifierPublic)
	TAssetPtr<class UClass>                            MissionGenerator;                                          // 0x0030(0x0018) (UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         MissionDifficultyInfo;                                     // 0x0048(0x000C) (NativeAccessSpecifierPublic)
	int                                                TileIndex;                                                 // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   AvailableUntil;                                            // 0x0058(0x0008) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAvailableTheaterMissions
// 0x0020
struct FFortAvailableTheaterMissions
{
	struct FString                                     TheaterId;                                                 // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortAvailableMissionData>           AvailableMissions;                                         // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   NextRefresh;                                               // 0x0018(0x0008) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MeshSet
// 0x00C4
struct FMeshSet
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UStaticMesh>                       BaseMesh;                                                  // 0x0004(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortResourceType>        ResourceType;                                              // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TLF3[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bDoNotBlockBuildings : 1;                                  // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDestroyOnPlayerBuildingPlacement : 1;                     // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNeedsDamageOverlay : 1;                                   // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VVTR[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TAssetPtr<class UParticleSystem>                   BreakEffect;                                               // 0x0024(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UParticleSystem>                   DeathParticles;                                            // 0x003C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DeathParticleSocketName;                                   // 0x0054(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class USoundBase>                        DeathSound;                                                // 0x005C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UParticleSystem>                   ConstructedEffect;                                         // 0x0074(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UStaticMesh>                       SearchedMesh;                                              // 0x008C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        SearchSpeed;                                               // 0x00A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              LootNoiseRange;                                            // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LootNoiseLoudness;                                         // 0x00B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LootSpawnLocation;                                         // 0x00B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TierMeshSets
// 0x0010
struct FTierMeshSets
{
	int                                                Tier;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMeshSet>                            MeshSets;                                                  // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.AttributeInfo
// 0x0008
struct FAttributeInfo
{
	unsigned char                                      UnknownData_9GKH[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortItemPropertyValue
// 0x004C
struct FFortItemPropertyValue
{
	TEnumAsByte<FortniteGame_EFortItemPropertyType>    PropertyType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortItemPropertyDisplay> DisplayMethod;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortItemPropertyUnit>    UnitType;                                                  // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LXGE[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntValue;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       StringValue;                                               // 0x0018(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	TArray<struct FText>                               ArrayStringValue;                                          // 0x0024(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorValue;                                                // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       NameValue;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DY6L[0x4];                                     // 0x0048(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortPointOnCurveRange
// 0x0008
struct FFortPointOnCurveRange
{
	float                                              MinPercentage;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPercentage;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPointsOnCurve
// 0x0024
struct FFortPointsOnCurve
{
	TAssetPtr<class UCurveFloat>                       Curve;                                                     // 0x0000(0x0018) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortPointOnCurveRange>              RangesForPointsOnCurve;                                    // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortItemList
// 0x0090 (0x0110 - 0x0080)
struct FFortItemList : public FFastArraySerializer
{
	TArray<struct FFortItemEntry>                      ReplicatedEntries;                                         // 0x0080(0x000C) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SVU2[0x3C];                                    // 0x008C(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UFortWorldItem*>                      ItemInstances;                                             // 0x00C8(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AHTO[0x3C];                                    // 0x00D4(0x003C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortObjectLibraryEntry
// 0x0014
struct FFortObjectLibraryEntry
{
	class UObjectLibrary*                              Library;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortItemType>            ItemType;                                                  // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KF90[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             LoadedPaths;                                               // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionWeightedReward
// 0x0080
struct FFortMissionWeightedReward
{
	struct FName                                       LootTierGroup;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LootIcon;                                                  // 0x0008(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionPopupWidgetData
// 0x00E8
struct FFortMissionPopupWidgetData
{
	struct FSlateBrush                                 AvailableIcon;                                             // 0x0000(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UnavailableIcon;                                           // 0x0074(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortEncounterTransitionSettings
// 0x0001
struct FFortEncounterTransitionSettings
{
	unsigned char                                      UnknownData_JHMK[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortEncounterProfile
// 0x003C
struct FFortEncounterProfile
{
	TAssetPtr<class UFortDifficultyOptionSetEncounter> EncounterOptions;                                          // 0x0000(0x0018) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortDifficultyOptionCategoryEncounter*> OverrideCategories;                                        // 0x0018(0x000C) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EncounterTypeTags;                                         // 0x0024(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortEncounterSequenceSettings
// 0x0028
struct FFortEncounterSequenceSettings
{
	struct FFortEncounterTransitionSettings            TransitionSettings;                                        // 0x0000(0x0001) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XXN2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFortEncounterProfile>               EncounterSequence;                                         // 0x0004(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SequenceTags;                                              // 0x0010(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionTaggedRewards
// 0x0014
struct FFortMissionTaggedRewards
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TAssetPtr<class UFortWorldItemDefinition>>  WorldItemDefinitions;                                      // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionConfigDataBucket
// 0x0020
struct FFortMissionConfigDataBucket
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TAssetPtr<class UClass>                            ConfigDataClass;                                           // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionConfigDataParams
// 0x000C
struct FFortMissionConfigDataParams
{
	TArray<struct FFortMissionConfigDataBucket>        ConfigParams;                                              // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortHexMapCoord
// 0x000C
struct FFortHexMapCoord
{
	int                                                Horizontal;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Vertical;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Depth;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortActiveTheaterInfo
// 0x0018
struct FFortActiveTheaterInfo
{
	TArray<struct FFortTheaterMapData>                 Theaters;                                                  // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAvailableTheaterMissions>       Missions;                                                  // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PlayerStatsRecord
// 0x0084
struct FPlayerStatsRecord
{
	int                                                Stats[0x21];                                               // 0x0000(0x0084) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.StatRecord
// 0x000C
struct FStatRecord
{
	struct FName                                       StatName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StatValue;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.StatManagerPeriodRecord
// 0x000C
struct FStatManagerPeriodRecord
{
	TArray<struct FStatRecord>                         StatRecords;                                               // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PinnedSchematicsRecord
// 0x000C
struct FPinnedSchematicsRecord
{
	TArray<struct FString>                             PinnedSchematicInstances;                                  // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortWorldData
// 0x0084
struct FFortWorldData
{
	struct FString                                     DisplayName;                                               // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OwnerName;                                                 // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            OwnerId;                                                   // 0x0018(0x0008) (NativeAccessSpecifierPublic)
	struct FString                                     WUID;                                                      // 0x0020(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastPlayedStr;                                             // 0x002C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       LastPlayedDisplayStr;                                      // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortWorldPrivacy>        Privacy;                                                   // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CJKB[0x3F];                                    // 0x0045(0x003F) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortZoneInstanceInfo
// 0x003C
struct FFortZoneInstanceInfo
{
	struct FString                                     WorldId;                                                   // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TheaterId;                                                 // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TheaterMissionId;                                          // 0x0018(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UClass>                            ZoneThemeClass;                                            // 0x0024(0x0018) (UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortZoneInstanceDetails
// 0x0028 (0x0064 - 0x003C)
struct FFortZoneInstanceDetails : public FFortZoneInstanceInfo
{
	TAssetPtr<class UClass>                            MissionGenerator;                                          // 0x003C(0x0018) (UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         ZoneDifficultyInfo;                                        // 0x0054(0x000C) (NativeAccessSpecifierPublic)
	int                                                TileIndex;                                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortClusterInfoRecord
// 0x001C
struct FFortClusterInfoRecord
{
	struct FFortHexMapCoord                            MapCoord;                                                  // 0x0000(0x000C) (NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClusterIndex;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortSplineBase
// 0x000C
struct FFortSplineBase
{
	unsigned char                                      UnknownData_2G19[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTime;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Duration;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortGeneratedEncounterSequence
// 0x0024
struct FFortGeneratedEncounterSequence
{
	struct FFortEncounterTransitionSettings            TransitionSettings;                                        // 0x0000(0x0001) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JG2Z[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StartingGeneratedEncounterProfileIndex;                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumEncountersInSequence;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EncounterSequenceTags;                                     // 0x000C(0x0018) (NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.AbilityToolSpawnParameters
// 0x0020
struct FAbilityToolSpawnParameters
{
	class UClass*                                      SpawnClass;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0010(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ABuildingSMActor*                            AttachedToActor;                                           // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionInfoTagRequirement
// 0x0030
struct FFortMissionInfoTagRequirement
{
	struct FGameplayTagContainer                       OldTags;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       NewTags;                                                   // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.CachedPlayerPowerPointsData
// 0x0040
struct FCachedPlayerPowerPointsData
{
	float                                              BaseScaleLevel;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeroBasePowerPoints;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PowerPointsPerDifficultyPoint;                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeaponPPPerOtherPP;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HomeBasePowerPoints;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HeroTypeTag;                                               // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeroLevel;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeroTotalPowerPoints;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EarnedPowerPointsWithoutWeaponPP;                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeaponPowerPoints;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EarnedPowerPoints;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerStateWorldPlayerID;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8EV[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.CachedGameDifficultyData
// 0x0050
struct FCachedGameDifficultyData
{
	float                                              GameDifficulty;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseScaleLevel;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbsoluteTheaterZoneDifficulty;                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RelativeTheaterZoneDifficulty;                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinGameDifficulty;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxGameDifficulty;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HighestPPWorldPlayerID;                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedPlayerPowerPointsData>        AllPlayerPowerPointsData;                                  // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         ZoneDifficultyInfoRow;                                     // 0x0028(0x000C) (NativeAccessSpecifierPublic)
	bool                                               bGameDifficultyIsOverridden;                               // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBaseScaleLevelIsOverridden;                               // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M54O[0x2];                                     // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DifficultyEquationString;                                  // 0x0038(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BaseScaleLevelEquationString;                              // 0x0044(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.OnTimeHitInfo
// 0x0030
struct FOnTimeHitInfo
{
	struct FScriptDelegate                             TimeCallback;                                              // 0x0000(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0LAD[0x20];                                    // 0x0010(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.TeamChangeRequest
// 0x0008
struct FTeamChangeRequest
{
	class AFortPlayerController*                       RequestingController;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortTeam>                DesiredTeam;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_37PY[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.PlayerBuildableClassContainer
// 0x000C
struct FPlayerBuildableClassContainer
{
	TArray<class UClass*>                              BuildingClasses;                                           // 0x0000(0x000C) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PermaniteBoundariesInfo
// 0x0014
struct FPermaniteBoundariesInfo
{
	int                                                MaxPermaniteStructures;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalPermaniteStructures;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AveragePermaniteStructureLevel;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPermaniteStructureLevel;                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPermaniteStructureLevel;                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortActionKeyMapping
// 0x003C
struct FFortActionKeyMapping
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       LocalizedName;                                             // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	struct FKey                                        KeyBind1;                                                  // 0x0014(0x0010) (NativeAccessSpecifierPublic)
	struct FKey                                        KeyBind2;                                                  // 0x0024(0x0010) (NativeAccessSpecifierPublic)
	float                                              InputScale;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAxisMapping;                                            // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QT2Q[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.HomebaseBuildingStaticEffectData
// 0x0010
struct FHomebaseBuildingStaticEffectData
{
	struct FName                                       BuildingName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BuildingLevel;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GameplayEffectClass;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortInstensityCurveSequenceProgression
// 0x0010
struct FFortInstensityCurveSequenceProgression
{
	class UFortIntensityCurveSequence*                 CurveSequence;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        SelectionWeight;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAlterationSlots
// 0x0002
struct FFortAlterationSlots
{
	TEnumAsByte<FortniteGame_EFortAlteration>          Type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NumSlots;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.SchematicRequirement
// 0x000C
struct FSchematicRequirement
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsConsumed;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5ZRR[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.EvolutionRequirements
// 0x0010
struct FEvolutionRequirements
{
	class UFortAccountItemDefinition*                  ResultItem;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortAccountItemDefinition*>          ItemsRequired;                                             // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.OutpostPOSTBoost
// 0x000C
struct FOutpostPOSTBoost
{
	struct FCurveTableRowHandle                        PlayerStructureHealthModPerPOSTLevel;                      // 0x0000(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.OutpostPOSTPerTheaterData
// 0x0010
struct FOutpostPOSTPerTheaterData
{
	int                                                TheaterSlot;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOutpostPOSTBoost                           POSTData;                                                  // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortZoneInfoRecord
// 0x0020
struct FFortZoneInfoRecord
{
	int                                                ZoneIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SaveArchiveNumber;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZoneFilename;                                              // 0x0008(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerStatsRecord>                  PlayerStatsData;                                           // 0x0014(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPlayerPerformanceEstimateSettings
// 0x0030
struct FFortPlayerPerformanceEstimateSettings
{
	struct FCurveTableRowHandle                        PlayerPerformanceEstimateTransformMin;                     // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        PlayerPerformanceEstimateTransformOrigin;                  // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        PlayerPerformanceEstimateTransformMax;                     // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              EncounterPlayerPerformanceWeight;                          // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviousWavePlayerPerformanceWeight;                       // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CampaignPlayerPerformanceWeight;                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortEncounterLockedUtility
// 0x0002
struct FFortEncounterLockedUtility
{
	TEnumAsByte<FortniteGame_EFortAIUtility>           Utility;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortEncounterUtilityDesire> UtilityDesire;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPlayerRecord
// 0x0104
struct FFortPlayerRecord
{
	struct FString                                     DisplayName;                                               // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UniqueId;                                                  // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              BackpackData;                                              // 0x0018(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bPlayerIsNew;                                              // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_98RH[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerStatsRecord                          PlayerStatsData;                                           // 0x0028(0x0084) (NativeAccessSpecifierPublic)
	struct FStatManagerPeriodRecord                    CampaignPeriodRecord;                                      // 0x00AC(0x000C) (NativeAccessSpecifierPublic)
	struct FPinnedSchematicsRecord                     PinnedSchematicsRecord;                                    // 0x00B8(0x000C) (NativeAccessSpecifierPublic)
	struct FQuickBar                                   PrimaryQuickBarRecord;                                     // 0x00C4(0x0020) (NativeAccessSpecifierPublic)
	struct FQuickBar                                   SecondaryQuickBarRecord;                                   // 0x00E4(0x0020) (NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortGeneratedMissionOption
// 0x000C
struct FFortGeneratedMissionOption
{
	class UFortDifficultyOptionCategoryMission*        MissionOptionCategory;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MissionOption;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeLerpValue;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortGeneratedEncounterOption
// 0x0010
struct FFortGeneratedEncounterOption
{
	class UFortDifficultyOptionCategoryEncounter*      EncounterOptionCategory;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      EncounterOption;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeLerpValue;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangedSinceLastVLog;                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H8T6[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortEncounterModeSettings
// 0x0004
struct FFortEncounterModeSettings
{
	TEnumAsByte<FortniteGame_EFortEncounterPacingMode> PacingMode;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortEncounterSpawnLocationPlacementMode> SpawnLocationMode;                                         // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortEncounterUtilitiesMode> UtilitiesMode;                                             // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortEncounterSpawnLimitType> SpawnLimitMode;                                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortGeneratedEncounterProfile
// 0x0038
struct FFortGeneratedEncounterProfile
{
	float                                              EncounterDifficultyLevel;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortGeneratedEncounterOption>       EncounterOptions;                                          // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortEncounterModeSettings                  EncounterModeSettings;                                     // 0x0010(0x0004) (NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       EncounterTypeTags;                                         // 0x0014(0x0018) (NativeAccessSpecifierPublic)
	int                                                DifficultyOptionPointsAvailableAtGeneration;               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinDifficultyOptionPointsToUse;                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GeneratedEncounterIndex;                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortGeneratedDifficultyOptions
// 0x0034
struct FFortGeneratedDifficultyOptions
{
	float                                              GameDifficultyAtGeneration;                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DifficultyOptionPointsAvailableAtGeneration;               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxEncounterSpawnPointsAtGeneration;                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinDifficultyOptionPointsToUse;                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortGeneratedEncounterSequence>     GeneratedEncounterSequences;                               // 0x0010(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortGeneratedMissionOption>         MissionOptions;                                            // 0x001C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortGeneratedEncounterProfile>      GeneratedEncounterProfiles;                                // 0x0028(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortMissionEntry
// 0x0058
struct FFortMissionEntry
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WorldMinLevel;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WorldMaxLevel;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         MinDifficultyInfoRow;                                      // 0x000C(0x000C) (Edit, NativeAccessSpecifierPublic)
	class UFortMissionGenerator*                       MissionGenerator;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMissionInfo*                            MissionInfo;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EMissionGenerationCategory> GenerationCategory;                                        // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0HQP[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFortGeneratedDifficultyOptions             GeneratedDifficultyOptions;                                // 0x0024(0x0034) (NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCategoryTableRow
// 0x0010
struct FFortCategoryTableRow : public FTableRowBase
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                SortPriority;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCatmullRomSpline
// 0x000C (0x0018 - 0x000C)
struct FFortCatmullRomSpline : public FFortSplineBase
{
	TArray<struct FVector>                             ControlPoints;                                             // 0x000C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortRewardReport
// 0x0030
struct FFortRewardReport
{
	struct FString                                     GameAccountId;                                             // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortAdvancementInfo>                InitialAdvancementInfo;                                    // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAdvancementInfo>                FinalAdvancementInfo;                                      // 0x0018(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortRewardActivity>                 RewardActivities;                                          // 0x0024(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortRarityItemData
// 0x0070
struct FFortRarityItemData
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color1;                                                    // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color2;                                                    // 0x001C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color3;                                                    // 0x002C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color4;                                                    // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color5;                                                    // 0x004C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Brightness;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Roughness;                                                 // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Glow;                                                      // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAvailableScriptedAction
// 0x001C
struct FFortAvailableScriptedAction
{
	struct FFortScriptedActionParams                   Params;                                                    // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	class AFortScriptedAction*                         ActionDefaults;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.InteractionType
// 0x0020
struct FInteractionType
{
	TEnumAsByte<FortniteGame_ETInteractionType>        InteractionType;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ME3P[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AFortPlayerPawn>              RequestingPawn;                                            // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>          InteractComponent;                                         // 0x000C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector                                     InteractPoint;                                             // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortFeedbackAction
// 0x001C
struct FFortFeedbackAction
{
	struct FFortFeedbackHandle                         Handle;                                                    // 0x0000(0x0010) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FFortFeedbackLine>                   Lines;                                                     // 0x0010(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortFeedbackActionBankDefined
// 0x0000 (0x001C - 0x001C)
struct FFortFeedbackActionBankDefined : public FFortFeedbackAction
{

};

// ScriptStruct FortniteGame.FortReplicatedStatMapping
// 0x0010
struct FFortReplicatedStatMapping
{
	TEnumAsByte<FortniteGame_EStatCategory>            StatCategory;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ITNH[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.SoundPerResourceLevel
// 0x0018
struct FSoundPerResourceLevel
{
	class USoundBase*                                  Sounds[0x6];                                               // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortDailyQuestInfo
// 0x0010
struct FFortDailyQuestInfo
{
	struct FName                                       DefaultQuestPack;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxActiveDailyQuests;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxRerollsPerDay;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ItemDefinitionAndCount
// 0x001C
struct FItemDefinitionAndCount
{
	int                                                Count;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UFortItemDefinition>               ItemDefinition;                                            // 0x0004(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortRegisteredPlayer
// 0x0018
struct FFortRegisteredPlayer
{
	struct FUniqueNetIdRepl                            UniqueId;                                                  // 0x0000(0x0008) (NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // 0x0008(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInitialPlayer;                                          // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LHEO[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortHostSessionParams
// 0x000C
struct FFortHostSessionParams
{
	struct FName                                       SessionName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ControllerId;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.EmptyServerReservation
// 0x0028
struct FEmptyServerReservation
{
	int                                                PlaylistId;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZoneInstanceId;                                            // 0x0004(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WUID;                                                      // 0x0010(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            WorldDataOwner;                                            // 0x001C(0x0008) (NativeAccessSpecifierPublic)
	bool                                               bMakePrivate;                                              // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LBEG[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.TurnFloatRange
// 0x0008
struct FTurnFloatRange
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TurnTransitionData
// 0x003C
struct FTurnTransitionData
{
	struct FName                                       MontageSectionName;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinYawAngle;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxYawAngle;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TurnRate;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredGameplayTags;                                      // 0x0014(0x0018) (Edit, NativeAccessSpecifierPublic)
	int                                                PriorityLevel;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTurnFloatRange                             SpeedConstraintRange;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bEnableSpeedConstraint;                                    // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSkipTransitionInCrowd;                                    // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3XP6[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.InteractContextInfo
// 0x0040
struct FInteractContextInfo
{
	struct FText                                       ContextText;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       ReceivingActor;                                            // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>          InteractComponent;                                         // 0x0014(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector                                     InteractPoint;                                             // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCurrentlyDisplayed : 1;                                   // 0x0028(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseInteractComponentForUI : 1;                            // 0x0028(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KG1J[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RequiredDuration;                                          // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TextColor;                                                 // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortFeedbackEventData
// 0x002C
struct FFortFeedbackEventData
{
	struct FFortFeedbackHandle                         Handle;                                                    // 0x0000(0x0010) (Edit, NativeAccessSpecifierPublic)
	float                                              ChanceToPlay;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinReplayTime;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxWitnessDistance;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterruptCurrentLine;                                     // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCanBeInterrupted;                                         // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCanQue;                                                   // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortFeedbackBroadcastFilter> MultiplayerBroadcastFilter;                                // 0x001F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortFeedbackSelectionMethod> ContextSelectionMethod;                                    // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8F27[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeedbackDelay;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeLastPlayed;                                            // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PawnDamageZones
// 0x0010
struct FPawnDamageZones
{
	bool                                               bActive;                                                   // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XY4P[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Bones;                                                     // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortSpokenLine
// 0x001C
struct FFortSpokenLine
{
	class USoundBase*                                  Audio;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AnimMontage;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSequence;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                                   Addressee;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortFeedbackBroadcastFilter> BroadcastFilter;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UEMH[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Delay;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterruptCurrentLine;                                     // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCanBeInterrupted;                                         // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCanQue;                                                   // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QRS5[0x1];                                     // 0x001B(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortPawnVocalChord
// 0x0080
struct FFortPawnVocalChord
{
	class UAudioComponent*                             FeedbackAudioComponent;                                    // 0x0000(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSpokenLine                             ReplicatedSpokenLine;                                      // 0x0004(0x001C) (NativeAccessSpecifierPublic)
	struct FFortSpokenLine                             PendingSpokenLine;                                         // 0x0020(0x001C) (RepSkip, NativeAccessSpecifierPublic)
	struct FFortSpokenLine                             QueuedSpokenLine;                                          // 0x003C(0x001C) (RepSkip, NativeAccessSpecifierPublic)
	struct FFortSpokenLine                             CurrentSpokenLine;                                         // 0x0058(0x001C) (RepSkip, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZNJF[0xC];                                     // 0x0074(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortActiveMontageDecisionWindow
// 0x000C
struct FFortActiveMontageDecisionWindow
{
	class UFortAnimNotifyState_AbilityDecisionWindow*  DecisionWindow;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           DecisionAnimation;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReceivedPrimaryInput;                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bReceivedSecondaryInput;                                   // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAlreadyProcessedInput;                                    // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WLRR[0x1];                                     // 0x000B(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.DamagerInfo
// 0x0008
struct FDamagerInfo
{
	class AActor*                                      DamageCauser;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageAmount;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.AssetAttachment
// 0x001C
struct FAssetAttachment
{
	struct FName                                       SocketName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SkeletalMeshAsset;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 StaticMeshAsset;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipOnDedicatedServers;                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OADZ[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      SkelMeshComp;                                              // 0x0014(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        StaticMeshComp;                                            // 0x0018(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCharacterPartMontageInfo
// 0x0008
struct FFortCharacterPartMontageInfo
{
	TEnumAsByte<FortniteGame_EFortCustomPartType>      CharacterPart;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P7Z5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                AnimMontage;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCharacterPartsRepMontageInfo
// 0x0014
struct FFortCharacterPartsRepMontageInfo
{
	TArray<struct FFortCharacterPartMontageInfo>       CharPartMontages;                                          // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PawnMontage;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayBit;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0X6V[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortPickupEntryData
// 0x0028
struct FFortPickupEntryData
{
	struct FInterpCurveFloat                           FloatCurve;                                                // 0x0000(0x0014) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FGuid                                       PickupGuid;                                                // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                              StartTime;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortPlayerAttributeSets
// 0x0018
struct FFortPlayerAttributeSets
{
	class UFortRegenHealthSet*                         HealthSet;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortDamageSet*                              DamageSet;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMovementSet*                            MovementSet;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortConstructionSet*                        ConstructionSet;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerAttrSet*                          PlayerAttrSet;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortHomebaseSet*                            HomebaseSet;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.WorkerSetBonusState
// 0x0010
struct FWorkerSetBonusState
{
	struct FGameplayTag                                SetBonusTag;                                               // 0x0000(0x0008) (BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                CurrentMatchCount;                                         // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredMatchCountToActivate;                              // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.SingleBuildingBonusDescription
// 0x0054
struct FSingleBuildingBonusDescription
{
	struct FText                                       NumericDescription;                                        // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortAttributeInfo                          AffectedAttributeInfo;                                     // 0x000C(0x0024) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredTags;                                              // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       RequiredTagsDescription;                                   // 0x0048(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortDamageSource
// 0x0010
struct FFortDamageSource
{
	TWeakObjectPtr<class AController>                  InstigatorController;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortDeliveryInfoRequirementsFilter
// 0x0068
struct FFortDeliveryInfoRequirementsFilter
{
	struct FGameplayTagRequirements                    SourceTagRequirements;                                     // 0x0000(0x0030) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                     // 0x0030(0x0030) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortTeamAffiliation>     ApplicableTeamAffiliation;                                 // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJIB[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bConsiderTeamAffiliationToInstigator : 1;                  // 0x0064(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyToPlayerPawns : 1;                                   // 0x0064(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyToAIPawns : 1;                                       // 0x0064(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyToBuildingActors : 1;                                // 0x0064(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1UAG[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.ProximityBasedGEDeliveryInfo
// 0x0078
struct FProximityBasedGEDeliveryInfo
{
	struct FFortDeliveryInfoRequirementsFilter         DeliveryRequirements;                                      // 0x0000(0x0068) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayEffectApplicationInfo>      EffectsToApply;                                            // 0x0068(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<FortniteGame_EFortProximityBasedGEApplicationType> ProximityApplicationType;                                  // 0x0074(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_089D[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortAbilitySetDeliveryInfo
// 0x0074
struct FFortAbilitySetDeliveryInfo
{
	struct FFortDeliveryInfoRequirementsFilter         DeliveryRequirements;                                      // 0x0000(0x0068) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<TAssetPtr<class UFortAbilitySet>>           AbilitySets;                                               // 0x0068(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortAbilitySetHandle
// 0x0020
struct FFortAbilitySetHandle
{
	TWeakObjectPtr<class UAbilitySystemComponent>      TargetAbilitySystemComponent;                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FGameplayAbilitySpecHandle>          GrantedAbilityHandles;                                     // 0x0008(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActiveGameplayEffectHandle>         AppliedEffectHandles;                                      // 0x0014(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.BuildingGameplayActorAbilityDeliveryBucket
// 0x006C
struct FBuildingGameplayActorAbilityDeliveryBucket
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FProximityBasedGEDeliveryInfo>       ProximityBasedEffectBuckets;                               // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAbilitySetDeliveryInfo>         PawnPersistentAbilitySetBuckets;                           // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAbilitySetHandle>               PersistentlyAppliedAbilitySets;                            // 0x0020(0x000C) (ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bEnabled : 1;                                              // 0x002C(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bEnabledByDefault : 1;                                     // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bHasGEsToApplyOnTouch : 1;                                 // 0x002C(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bHasGEsToApplyOnPulseTimer : 1;                            // 0x002C(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bHasPersistentEffects : 1;                                 // 0x002C(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M13G[0x3F];                                    // 0x002D(0x003F) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.BuildingGameplayActorAbilityDeliveryInfo
// 0x0030
struct FBuildingGameplayActorAbilityDeliveryInfo
{
	TArray<struct FBuildingGameplayActorAbilityDeliveryBucket> DeliveryBuckets;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                              ProximityPulseInterval;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bHasGEsToApplyOnTouch : 1;                                 // 0x0010(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bHasGEsToApplyOnPulseTimer : 1;                            // 0x0010(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bHasPersistentEffects : 1;                                 // 0x0010(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_209L[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABuildingGameplayActor*                      OwningActor;                                               // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              DeferredTouchActorsToProcess;                              // 0x0018(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WKJS[0xC];                                     // 0x0024(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.TeamStrategicBuildingHandle
// 0x0004
struct FTeamStrategicBuildingHandle
{
	int                                                Handle;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.StrategicBuildingLevelCriteria
// 0x0014
struct FStrategicBuildingLevelCriteria
{
	struct FText                                       UnlockRequirementText;                                     // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortStrategicBuildingLevelCriteriaDisplayRepresentation> RequirementDisplayRepresentation;                          // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M8F1[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UnlockRequirementQuantity;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.StrategicBuildingActiveConstructionInfo
// 0x0014
struct FStrategicBuildingActiveConstructionInfo
{
	float                                              ConstructionStartTime;                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstructionEndTime;                                       // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConstructionLevel;                                         // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUnderConstruction : 1;                                    // 0x000C(0x0001) BIT_FIELD (Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EFML[0x7];                                     // 0x000D(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.StrategicBuildingLevelActiveCriteriaProgress
// 0x000C
struct FStrategicBuildingLevelActiveCriteriaProgress
{
	float                                              CurrentProgress;                                           // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxProgress;                                               // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bProgressAllowed : 1;                                      // 0x0008(0x0001) BIT_FIELD (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y36I[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortSpawnSlotData
// 0x0014
struct FFortSpawnSlotData
{
	struct FVector                                     SpawnSlotLocation;                                         // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AFortAIPawn*                                 OccupyingAI;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortRiftSlotStatus>      SlotStatus;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SKMP[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortBounceData
// 0x0030
struct FFortBounceData
{
	float                                              StartTime;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BounceValue;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DeformationVector;                                         // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                DeformationCenter;                                         // 0x001C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortBounceType>          BounceType;                                                // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0XEB[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.BuildingNavObstacle
// 0x0020
struct FBuildingNavObstacle
{
	struct FBox                                        LocalBounds;                                               // 0x0000(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EBuildingNavObstacleType> ObstacleType;                                              // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SRCO[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.RandomDayphaseFX
// 0x0028
struct FRandomDayphaseFX
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>                     AltParticleSystems;                                        // 0x0004(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ChanceToSpawnFX;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<FortniteGame_EFortDayPhase>>    RequiredDayphases;                                         // 0x0014(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bRandomSelectionAlreadyHappened;                           // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UNI5[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    SpawnedComponent;                                          // 0x0024(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortSearchBounceData
// 0x0010
struct FFortSearchBounceData
{
	struct FVector                                     BounceNormal;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint32_t                                           SearchAnimationCount;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.BuildingActorNavArea
// 0x0004
struct FBuildingActorNavArea
{
	int                                                AreaBits;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.BASEGameplayEffect
// 0x0008
struct FBASEGameplayEffect
{
	class UClass*                                      Effect;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelOverride;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PatternBASEEffect
// 0x0008
struct FPatternBASEEffect
{
	class UBuildingEditModeMetadata*                   Pattern;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 Mesh;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TrackMeshConfig
// 0x0008
struct FTrackMeshConfig
{
	TEnumAsByte<FortniteGame_ETrackIncline>            InclineSideA;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_ETrackIncline>            InclineSideB;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O8VC[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 Mesh;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TrackMeshVerticalityConfig
// 0x000C
struct FTrackMeshVerticalityConfig
{
	TArray<struct FTrackMeshConfig>                    MeshConfigs;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TrackMeshTrackPieceTypeConfig
// 0x0018
struct FTrackMeshTrackPieceTypeConfig
{
	struct FTrackMeshVerticalityConfig                 MeshesByVerticality[0x2];                                  // 0x0000(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCosmeticModification
// 0x0034
struct FFortCosmeticModification
{
	class UMaterialInterface*                          CosmeticMaterial;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             AmbientParticleSystem;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             MuzzleParticleSystem;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ReloadParticleSystem;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             BeamParticleSystem;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TracerTemplate;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bModifyColor;                                              // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NUVV[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ColorAlteration;                                           // 0x001C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       ColorParameterName;                                        // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortConditionalCosmeticModification
// 0x004C
struct FFortConditionalCosmeticModification
{
	struct FFortCosmeticModification                   CosmeticModification;                                      // 0x0000(0x0034) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ConditionalTags;                                           // 0x0034(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MinimapGoalByTagColorsData
// 0x0028
struct FMinimapGoalByTagColorsData
{
	struct FGameplayTagContainer                       GoalTags;                                                  // 0x0000(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                                MinimapColor;                                              // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortWildcardData
// 0x000C
struct FFortWildcardData
{
	struct FName                                       RowName;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Idx;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortLocalWildcardData
// 0x0008
struct FFortLocalWildcardData
{
	struct FName                                       ColumnName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.AIHotSpotSlotInfo
// 0x0008
struct FAIHotSpotSlotInfo
{
	class AAIHotSpot*                                  HotSpot;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotIndex;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIEncounterPIDController
// 0x0058
struct FFortAIEncounterPIDController
{
	float                                              ProportionalGain;                                          // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntegralGain;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DerivativeGain;                                            // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_161C[0x4C];                                    // 0x000C(0x004C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortAIEncounterPIDControllerSettings
// 0x0024
struct FFortAIEncounterPIDControllerSettings
{
	struct FCurveTableRowHandle                        ProportionalGain;                                          // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        IntegralGain;                                              // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        DerivativeGain;                                            // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.UtilityContribution
// 0x000C
struct FUtilityContribution
{
	TEnumAsByte<FortniteGame_EFortCombatFactors>       ContributingFactor;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAIDirectorFactor>    ContributingAIDirectorFactor;                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OICE[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxContribution;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortFactorContributionType> ContributionType;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NSUX[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.PendingSpawnInfo
// 0x0080
struct FPendingSpawnInfo
{
	class UClass*                                      PawnClassToSpawn;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SpawnPoint;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnLocation;                                             // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    SpawnRotation;                                             // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      SpawnSource;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnedFromExternalSpawner;                               // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEBX[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SpawnSetIndex;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortressAIType>          AIType;                                                    // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L6GO[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFortPlayerController*                       TargetPlayer;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAIEncounterInfo*                        EncounterInfo;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DifficultyLevel;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAISpawnGroup*                           SpawnGroup;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       SpawnGroupGuid;                                            // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                EnemyIndexInSpawnGroup;                                    // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToSpawn;                                               // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       PendingSpawnInfoGuid;                                      // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIgnoreCollision;                                          // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bKillBuildingActorsAtSpawnLocation;                        // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z0PG[0x2];                                     // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EncounterAILifespan;                                       // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDebugSpawnedAI;                                           // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UD98[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UFortAbilitySet*>                     AbilitySetsToGrantOnSpawn;                                 // 0x0074(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.UtilityTypeFloatPair
// 0x0008
struct FUtilityTypeFloatPair
{
	TEnumAsByte<FortniteGame_EFortAIUtility>           Utility;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CNMY[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.AIDirectorEventData
// 0x0020
struct FAIDirectorEventData
{
	TEnumAsByte<FortniteGame_EFortAIDirectorEvent>     Event;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7Q6M[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCurveTableRowHandle                        DataMax;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        CoolDownRate;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAIDirectorEventContribution> ContributionType;                                          // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAIDirectorEventParticipant> OwnerParticipantType;                                      // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R712[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortAIDirectorFactorContribution
// 0x000C
struct FFortAIDirectorFactorContribution
{
	TEnumAsByte<FortniteGame_EFortAIDirectorEvent>     AIDirectorEvent;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QO88[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxContribution;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAIDirectorFactorContribution> ContributionType;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PFEL[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortAIDirectorEvent
// 0x0010
struct FFortAIDirectorEvent
{
	TEnumAsByte<FortniteGame_EFortAIDirectorEvent>     Event;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GMBG[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     EventSource;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     EventTarget;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EventValue;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.GoalSelectionCriteria
// 0x0004
struct FGoalSelectionCriteria
{
	class UEnvQuery*                                   GoalSelectionQuery;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCurveSequenceInstanceInfo
// 0x0004
struct FFortCurveSequenceInstanceInfo
{
	unsigned char                                      UnknownData_66O3[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortSpawnPointsPercentageCurveSequenceInstanceInfo
// 0x0004 (0x0008 - 0x0004)
struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{
	class UFortSpawnPointsPercentageCurveSequence*     SpawnPointsPercentageCurveSequence;                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortIntensityCurveSequenceInstanceInfo
// 0x0004 (0x0008 - 0x0004)
struct FFortIntensityCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{
	class UFortIntensityCurveSequence*                 IntensityCurveSequence;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.AIEncounterSpawnGroupWeights
// 0x002C
struct FAIEncounterSpawnGroupWeights
{
	unsigned char                                      UnknownData_DY88[0x2C];                                    // 0x0000(0x002C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.SpawnGroupInstanceInfo
// 0x003C
struct FSpawnGroupInstanceInfo
{
	class UFortAISpawnGroup*                           SpawnGroup;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumActiveAlive;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentGroupInstanceSpawnPointsUsed;                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumEngaged;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReadyToSpawn;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFinishedSpawning;                                         // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1K1D[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       GroupGuid;                                                 // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                EnemySpawnDataIndex;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeSelected;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NextEnemyToSpawnIndex;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFortAIPawn*>                         PawnList;                                                  // 0x0030(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIEncounterWaveProgressEstimation
// 0x001C
struct FFortAIEncounterWaveProgressEstimation
{
	float                                              SectionProgressEstimate;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SectionStartTime;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastWaveProgressUpdateTime;                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PeakAndFadeWavePercentage;                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAdjustmentPerSecond;                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAIWaveProgressSection> CurrentSection;                                            // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V0RF[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfWaveSegments;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortGoalActorEncounterDataManagerPair
// 0x0008
struct FFortGoalActorEncounterDataManagerPair
{
	class AActor*                                      GoalActor;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortAIDirectorDataManager*                  EncounterDataManager;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortSpawnAIRequest
// 0x0040
struct FFortSpawnAIRequest
{
	struct FGuid                                       SpawnGroupInstanceGuid;                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                EnemyIndex;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnLocation;                                             // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    SpawnRotation;                                             // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      SpawnPoint;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortAbilitySet*>                     AbilitySetsToGrantOnSpawn;                                 // 0x0030(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIgnoreCollisionWhenSpawning;                              // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TV2V[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.ThreatGridIndex
// 0x0008
struct FThreatGridIndex
{
	int                                                X;                                                         // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y;                                                         // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.EncounterEnvironmentQueryInstance
// 0x0034
struct FEncounterEnvironmentQueryInstance
{
	struct FEncounterEnvironmentQueryInfo              EnvironmentQueryInfo;                                      // 0x0000(0x001C) (NativeAccessSpecifierPublic)
	int                                                QueryID;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsWaitingForQueryResults;                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortEncounterDirection>  ChosenDirection;                                           // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0XP5[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             QueryLocations;                                            // 0x0024(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                NumTimesUsed;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIEncounterRift
// 0x0014
struct FFortAIEncounterRift
{
	int                                                QueryID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RiftLocation;                                              // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ABuildingRift*                               RiftActor;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIEncounterSpawnArea
// 0x0028
struct FFortAIEncounterSpawnArea
{
	TArray<struct FEncounterEnvironmentQueryInstance>  QueryInstances;                                            // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterRift>                PendingRifts;                                              // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterRift>                Rifts;                                                     // 0x0018(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUsingFallbackQuery;                                       // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J28W[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortAIEncounterQueryDirectionTracker
// 0x0034
struct FFortAIEncounterQueryDirectionTracker
{
	bool                                               bHasTriedPreviousDirections;                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E2IN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<FortniteGame_EFortEncounterDirection>> PreviousQueryDirections;                                   // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<FortniteGame_EFortEncounterDirection>> ChosenDirections;                                          // 0x0010(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<FortniteGame_EFortEncounterDirection>> FailedDirections;                                          // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<FortniteGame_EFortEncounterDirection>> AvailableDirections;                                       // 0x0028(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.HeroSpecializationAttributeRequirement
// 0x0008
struct FHeroSpecializationAttributeRequirement
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              MinimumValue;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortSpecializationSlot
// 0x0030
struct FFortSpecializationSlot
{
	class UFortAbilityKit*                             GrantedAbilityKit;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAbilityKit*                             RemovedAbilityKit;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHeroSpecializationAttributeRequirement> AttributeRequirements;                                     // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredTags;                                              // 0x0014(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                MinimumHeroLevel;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPickupLocationData
// 0x0044
struct FFortPickupLocationData
{
	class AFortPlayerPawn*                             PickupTarget;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPickup*                                 CombineTarget;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ItemOwner;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       LootInitialPosition;                                       // 0x000C(0x000C) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       LootFinalPosition;                                         // 0x0018(0x000C) (NativeAccessSpecifierPublic)
	float                                              FlyTime;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   StartDirection;                                            // 0x0028(0x000C) (NativeAccessSpecifierPublic)
	struct FGuid                                       PickupGuid;                                                // 0x0034(0x0010) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortEventConditional
// 0x0024
struct FFortEventConditional
{
	TEnumAsByte<FortniteGame_EFortEventConditionType>  ConditionalType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G2YO[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       StatToCompare;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EStatRecordingPeriod>     RelevantPeriod;                                            // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortCompare>             ComparisonType;                                            // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MSU7[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Value;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSchematicItemDefinition*                CraftingItem;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanCraft;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VON0[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStat*                                       Stat;                                                      // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                       FPC;                                                       // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortStatEvent
// 0x0040
struct FFortStatEvent
{
	struct FName                                       StatEventName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortEventRepeat>         RepeatType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2E31[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               StatsToMonitor;                                            // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortEventConditional>               Conditions;                                                // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       NotificationToDisplay;                                     // 0x0024(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NotificationToRemove;                                      // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     NotificationParameter;                                     // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStat*                                       AssociatedStat;                                            // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                       FPC;                                                       // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortStatEventSequence
// 0x0038
struct FFortStatEventSequence
{
	struct FName                                       StatEventName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortEventRepeat>         RepeatType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3T75[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFortStatEvent>                      EventSequence;                                             // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UStat*                                       AssociatedStat;                                            // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                       FPC;                                                       // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               StatsToMonitor;                                            // 0x0020(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortEventConditional>               Conditions;                                                // 0x002C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.TransformableNavLinkClass
// 0x001C
struct FTransformableNavLinkClass
{
	struct FVector                                     Translation;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      NavigationLinksClass;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.CarriedObjectAttachmentInfo
// 0x0024
struct FCarriedObjectAttachmentInfo
{
	class AActor*                                      AttachParent;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0004(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativeTranslation;                                       // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RelativeRotation;                                          // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.GoalDistanceData
// 0x0054
struct FGoalDistanceData
{
	bool                                               bIgnoreScreeningDistance;                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GGW4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   ScreeningTestMaxDistance;                                  // 0x0004(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TAssetPtr<class UCurveFloat>                       TestScoreCurve;                                            // 0x0020(0x0018) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   CurveDistanceScale;                                        // 0x0038(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.BuildingUpgradeAttribute
// 0x0018
struct FBuildingUpgradeAttribute
{
	bool                                               bAchieved;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WIYG[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Level;                                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentLevel;                                              // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.BuildingUpgradeCost
// 0x000C
struct FBuildingUpgradeCost
{
	bool                                               bAchieved;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortPersistentResources> Type;                                                      // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DOW8[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Cost;                                                      // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Available;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.BuildingUpgradeItemCost
// 0x0010
struct FBuildingUpgradeItemCost
{
	bool                                               bAchieved;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7L9L[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortItemDefinition*                         Item;                                                      // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Available;                                                 // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.BuildingUpgradeRequirementsForLevel
// 0x002C
struct FBuildingUpgradeRequirementsForLevel
{
	bool                                               bAllAchieved;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZKKY[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AccountLevel;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBuildingUpgradeAttribute>           Attributes;                                                // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBuildingUpgradeCost>                Costs;                                                     // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBuildingUpgradeItemCost>            ItemCosts;                                                 // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.StrategicBuildingUpgradePathInfo
// 0x0098
struct FStrategicBuildingUpgradePathInfo
{
	struct FText                                       UpgradeDesc;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UpgradeBrush;                                              // 0x000C(0x0074) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       UpgradeTags;                                               // 0x0080(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.EncounterGoalSelectionTableEntry
// 0x001C
struct FEncounterGoalSelectionTableEntry
{
	struct FGameplayTagContainer                       RequiredGameplayTags;                                      // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FGoalSelectionCriteria                      GoalSelectionCriteria;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PawnGoalSelectionCriteria
// 0x003C
struct FPawnGoalSelectionCriteria
{
	struct FGameplayTagContainer                       IncludeEnemiesWithTags;                                    // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ExcludeEnemiesWithTags;                                    // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FGoalSelectionCriteria>              GoalSelectionCriteria;                                     // 0x0030(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PawnGoalSelectionTableEntry
// 0x0054
struct FPawnGoalSelectionTableEntry
{
	struct FGameplayTagContainer                       RequiredGameplayTags;                                      // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FPawnGoalSelectionCriteria                  PawnGoalSelectionCriteria;                                 // 0x0018(0x003C) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.StrategicBuildingLevelUnlocks
// 0x0024
struct FStrategicBuildingLevelUnlocks
{
	TArray<struct FFortAbilitySetDeliveryInfo>         OwnerStrategicBuildingAbilitySetBuckets;                   // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAbilitySetDeliveryInfo>         PawnPersistentAbilitySetBuckets;                           // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FProximityBasedGEDeliveryInfo>       ProximityBasedEffectBuckets;                               // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.StrategicBuildingLevelInformation
// 0x004C
struct FStrategicBuildingLevelInformation
{
	struct FStrategicBuildingLevelCriteria             UpgradeCriteria;                                           // 0x0000(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FStrategicBuildingUpgradePathInfo>   UpgradePaths;                                              // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FStrategicBuildingLevelUnlocks              LevelUnlocks;                                              // 0x0020(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              ConstructionTime;                                          // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DestructionRecoveryTime;                                   // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.UtilityData
// 0x0038
struct FUtilityData
{
	TArray<struct FUtilityContribution>                ContributingFactors;                                       // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ContributionsTotal;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyRecentSelectionPenalty;                              // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CQVX[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RecentlySelectedPenaltyPercentage;                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PenaltyFallOffRate;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DebugGraphName;                                            // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DebugGraphColor;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAnalyticsEventAttribute
// 0x0018
struct FFortAnalyticsEventAttribute
{
	unsigned char                                      UnknownData_HNK7[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortConnectionData
// 0x002C
struct FFortConnectionData
{
	class ABuildingSMActor*                            ConnectedActor;                                            // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       ConnectedActorGuid;                                        // 0x0004(0x0010) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FName                                       MySocketName;                                              // 0x0014(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TheirSocketName;                                           // 0x001C(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EAMJ[0x8];                                     // 0x0024(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortConnectivityComponentData
// 0x0010
struct FFortConnectivityComponentData
{
	TArray<struct FFortConnectionData>                 Connections;                                               // 0x0000(0x000C) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                               bIsPowered;                                                // 0x000C(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsProvidingPower;                                         // 0x000D(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowConnections;                                         // 0x000E(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowsPowerToPassThrough;                                 // 0x000F(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ConsumeEffectData
// 0x0018
struct FConsumeEffectData
{
	class UClass*                                      EffectClass;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                              Level;                                                     // 0x0004(0x0014) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortConditionalIncludeTags
// 0x0030
struct FFortConditionalIncludeTags
{
	struct FGameplayTagContainer                       ConditionTags;                                             // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       IncludeTags;                                               // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ClimbLinkData
// 0x002C
struct FClimbLinkData
{
	unsigned char                                      UnknownData_BFJV[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           UniqueLinkId;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KRL4[0x8];                                     // 0x0024(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.KeepEventWaveData
// 0x002C
struct FKeepEventWaveData
{
	struct FText                                       WaveDescription;                                           // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      EncounterTemplate;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAISpawnGroupProgressionInfo*            SpawnGroupProgressionInfo;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WarmupTime;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EncounterTime;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DifficultyLevel;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AliveMultiplier;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnemySpawnBits1;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnemySpawnBits2;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.CombatEventData
// 0x0028
struct FCombatEventData
{
	float                                              Heat;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHeatContribution;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoolDownRate;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DebugGraphColor;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortSpawnContext
// 0x001C
struct FFortSpawnContext
{
	TEnumAsByte<FortniteGame_EFortTeam>                Team;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DP3T[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       Tags;                                                      // 0x0004(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, SaveGame, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ZoneLoadingScreenHeadingConfig
// 0x001C
struct FZoneLoadingScreenHeadingConfig
{
	class UTexture2D*                                  HeadingImage;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Heading;                                                   // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       HeadingDescription;                                        // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ZoneLoadingScreenConfig
// 0x0070
struct FZoneLoadingScreenConfig
{
	class UTexture2D*                                  BackgroundImage;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       TitleDescription;                                          // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FZoneLoadingScreenHeadingConfig             Headings[0x3];                                             // 0x001C(0x0054) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.KeepEventInfo
// 0x001C
struct FKeepEventInfo
{
	TAssetPtr<class UFortKeepEventInfo>                KeepEvent;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DifficultyLevelOffset;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortActorRecord
// 0x0070
struct FFortActorRecord
{
	struct FGuid                                       ActorGuid;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortBuildingPersistentState> ActorState;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZGK[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ActorClass;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVV7[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ActorTransform;                                            // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSpawnedActor;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R0QK[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              ActorData;                                                 // 0x0054(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2RAY[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortLevelRecord
// 0x0034
struct FFortLevelRecord
{
	int                                                ParentLevelIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       BoundActorGuid;                                            // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       PackageName;                                               // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortActorRecord>                    SavedActors;                                               // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                X_Loc;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y_Loc;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Rotation;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XS9U[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortZoneStats
// 0x00B4
struct FFortZoneStats
{
	unsigned char                                      UnknownData_PHA2[0xB4];                                    // 0x0000(0x00B4) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortAIEncounterSpawnPointsProfile
// 0x0030
struct FFortAIEncounterSpawnPointsProfile
{
	struct FGameplayTagContainer                       EncounterTypeTags;                                         // 0x0000(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCurveTableRowHandle>                MaxSpawnPointsPerPlayerCount;                              // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCurveTableRowHandle>                MinSpawnPointsPerPlayerCount;                              // 0x0024(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ItemCategory
// 0x02DC
struct FItemCategory
{
	struct FGameplayTagContainer                       TagContainer;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       CategoryName;                                              // 0x0018(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                         CategoryBrush;                                             // 0x0024(0x02B8) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortDifficultyOptionBudget
// 0x0024
struct FFortDifficultyOptionBudget
{
	struct FGameplayTagContainer                       BudgetTypeTags;                                            // 0x0000(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        DifficultyOptionPointsCurve;                               // 0x0018(0x000C) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPossibleMission
// 0x0024
struct FFortPossibleMission
{
	TAssetPtr<class UFortMissionInfo>                  MissionInfo;                                               // 0x0000(0x0018) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinAlwaysGenerated;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPrototype;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7DXC[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortMissionInfoOption
// 0x001C
struct FFortMissionInfoOption
{
	TAssetPtr<class UFortMissionInfo>                  MissionInfo;                                               // 0x0000(0x0018) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDifficultyLevel;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionEventName
// 0x0000 (0x0010 - 0x0010)
struct FFortMissionEventName : public FFortEventName
{

};

// ScriptStruct FortniteGame.FortMissionUIActorHandle
// 0x0030
struct FFortMissionUIActorHandle
{
	TWeakObjectPtr<class AActor>                       AttachedActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector                                     AttachmentOffset;                                          // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaxVisibleDistance;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       MissionGuid;                                               // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortMissionInfoIndicator>    MissionUIIndicator;                                        // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MissionTimeDisplayData
// 0x002C
struct FMissionTimeDisplayData
{
	float                                              LessThanTimeValue;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideTimer;                                                // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KAG1[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                BaseColor;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                PulseColor;                                                // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ColorPulsesPerSecond;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MissionTimerData
// 0x0024
struct FMissionTimerData
{
	bool                                               bTimerIsPaused;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E6A1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OriginalTimePeriod;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReplicatedRemainingTime;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClientRemainingTime;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UL4A[0x14];                                    // 0x0010(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortNavLinkPattern
// 0x0008
struct FFortNavLinkPattern
{
	int                                                PatternBits;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WildcardBits;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.AuxiliaryEditTileMeshData
// 0x0014
struct FAuxiliaryEditTileMeshData
{
	class UStaticMesh*                                 TileMesh;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  TileTexture;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RelativeRot;                                               // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.EditModeState
// 0x000C
struct FEditModeState
{
	class UClass*                                      EditClass;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RotationIterations;                                        // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMirrored;                                                 // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCurrentlyValid;                                           // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4PVL[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortGameplayEffectContainer
// 0x006C
struct FFortGameplayEffectContainer
{
	struct FGameplayTag                                ApplicationTag;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortAbilityTargetSelectionList             TargetSelection;                                           // 0x0008(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              TargetGameplayEffectClasses;                               // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              OwnerGameplayEffectClasses;                                // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ActivationCues;                                            // 0x003C(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ImpactCues;                                                // 0x0054(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TileCompInterpData
// 0x0018
struct FTileCompInterpData
{
	struct FVector                                     InitialTranslation;                                        // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     DesiredTranslation;                                        // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMapData
// 0x0030
struct FFortMapData
{
	TAssetPtr<class UWorld>                            BuildingWorld;                                             // 0x0000(0x0018) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       BuildingLevelTags;                                         // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.BuildingValueRules
// 0x001C
struct FBuildingValueRules
{
	int                                                CellsAbove;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CellsBelow;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CellHorizontalRadius;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceFromObjectiveWeight;                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackWeight;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StructuralWeight;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TrapWeight;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MOBATurretPrioritySetting
// 0x000C
struct FMOBATurretPrioritySetting
{
	int                                                AIPriority;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerPriority;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BuildingPriority;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortSocialItemBasicData
// 0x00FC
struct FFortSocialItemBasicData
{
	int                                                Rating;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMyTownBannerData                           Banner;                                                    // 0x0004(0x00E8) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x00EC(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TeamStrategicBuildingEntry
// 0x0008 (0x0014 - 0x000C)
struct FTeamStrategicBuildingEntry : public FFastArraySerializerItem
{
	struct FTeamStrategicBuildingHandle                StrategicBuildingHandle;                                   // 0x000C(0x0004) (Transient, NativeAccessSpecifierPublic)
	class AStrategicBuildingActor*                     StrategicBuilding;                                         // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TeamStrategicBuildingEntryArray
// 0x000C (0x008C - 0x0080)
struct FTeamStrategicBuildingEntryArray : public FFastArraySerializer
{
	TArray<struct FTeamStrategicBuildingEntry>         Items;                                                     // 0x0080(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.ColorSwatchPair
// 0x0018
struct FColorSwatchPair
{
	struct FName                                       ColorName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorValue;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortClientEvent
// 0x0018
struct FFortClientEvent
{
	struct FName                                       CategoryName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EventName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     EventSource;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     EventFocus;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PooledDamageNumberComponents
// 0x000C
struct FPooledDamageNumberComponents
{
	TArray<class UStaticMeshComponent*>                Components;                                                // 0x0000(0x000C) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.LiveDamageNumberComponent
// 0x000C
struct FLiveDamageNumberComponent
{
	class UStaticMeshComponent*                        Component;                                                 // 0x0000(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQG4[0x8];                                     // 0x0004(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortGameplayAbilityMontageInfo
// 0x0044
struct FFortGameplayAbilityMontageInfo
{
	class UAnimMontage*                                MontageToPlay;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimPlayRate;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimRootMotionTranslationScale;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortGameplayAbilityMontageSectionToPlay> MontageSectionToPlay;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LRDD[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       OverrideSection;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayRandomSection;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_01YZ[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFortCharacterPartMontageInfo>       CharacterPartMontages;                                     // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N98J[0x1C];                                    // 0x0028(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortGameplayEffectContainerSpec
// 0x0064
struct FFortGameplayEffectContainerSpec
{
	struct FFortAbilityTargetSelectionList             TargetSelection;                                           // 0x0000(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectSpecHandle>           TargetGameplayEffectSpecs;                                 // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectSpecHandle>           OwnerGameplayEffectSpecs;                                  // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ActivationCues;                                            // 0x0034(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ImpactCues;                                                // 0x004C(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAISpawnerData
// 0x0050
struct FFortAISpawnerData
{
	struct FGuid                                       SpawnGroupInstanceGuid;                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortSpawnAIRequest                         ReservedSpawnRequest;                                      // 0x0010(0x0040) (NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.DistanceToTargetComparison
// 0x001C
struct FDistanceToTargetComparison
{
	struct FGameplayTagContainer                       DistanceDataTags;                                          // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EArithmeticKeyOperation>      Operator;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_ETargetDistanceComparisonType> ComparisonType;                                            // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U7HF[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortBuildingInstruction
// 0x0070
struct FFortBuildingInstruction
{
	struct FFortActorRecord                            ActorRecord;                                               // 0x0000(0x0070) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, SaveGame, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.PenetrationAvoidanceFeeler
// 0x0020
struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              WorldWeight;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PawnWeight;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Extent;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraceInterval;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FramesUntilNextTrace;                                      // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.CombatThresholdData
// 0x0020
struct FCombatThresholdData
{
	float                                              HeatLevel;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ThresholdName;                                             // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DebugGraphColor;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAbilityTagRelationship
// 0x0038
struct FFortAbilityTagRelationship
{
	struct FGameplayTag                                AbilityTag;                                                // 0x0000(0x0008) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AbilityTagsToBlock;                                        // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AbilityTagsToCancel;                                       // 0x0020(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCachedMatchmakingSearchParams
// 0x006C
struct FFortCachedMatchmakingSearchParams
{
	TEnumAsByte<FortniteGame_EFortMatchmakingType>     MatchmakingType;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QHZU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMatchmakingParams                          MatchmakingParams;                                         // 0x0004(0x0064) (NativeAccessSpecifierPrivate)
	bool                                               bValid;                                                    // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NCVN[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortInviteSessionParams
// 0x001C
struct FFortInviteSessionParams
{
	TEnumAsByte<FortniteGame_EMatchmakingState>        State;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QVD8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       FailureReason;                                             // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> LastBeaconResponse;                                        // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L3TJ[0xB];                                     // 0x0011(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortWorldPlayerLoadout
// 0x0054
struct FFortWorldPlayerLoadout
{
	bool                                               bPlayerIsNew;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QMLD[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             PinnedSchematicInstances;                                  // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQuickBar                                   PrimaryQuickBarRecord;                                     // 0x0010(0x0020) (NativeAccessSpecifierPublic)
	struct FQuickBar                                   SecondaryQuickBarRecord;                                   // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	int                                                ZonesCompleted;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortWorldProfileUpdateRequest
// 0x0048
struct FFortWorldProfileUpdateRequest
{
	unsigned char                                      UnknownData_WGEE[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfRequests;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4G74[0x3C];                                    // 0x000C(0x003C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.HomeBaseWorkerSlot
// 0x0008
struct FHomeBaseWorkerSlot
{
	bool                                               bIsManager;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsLocked;                                                 // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TWA6[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHomeBaseWorker*                             Worker;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.HomeBaseProducedResources
// 0x0010
struct FHomeBaseProducedResources
{
	TEnumAsByte<FortniteGame_EFortPersistentResources> Type;                                                      // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AZJ7[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Produced;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Capacity;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rate;                                                      // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MyTownRoadData3D
// 0x000C
struct FMyTownRoadData3D
{
	int                                                MapSlotId1;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapSlotId2;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EMyTown3DRoadType>        RoadType;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8YFE[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.GoalSelectionQueryInfo
// 0x001C
struct FGoalSelectionQueryInfo
{
	class UEnvQuery*                                   GoalSelectionQuery;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RequiredGameplayTags;                                      // 0x0004(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TileGroupInfo
// 0x0014
struct FTileGroupInfo
{
	class UWorldTileGroup*                             TileGroup;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Weight;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinTiles;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTiles;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPlaceAdjacent : 1;                                        // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RA9D[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.TileGroupSelection
// 0x000C
struct FTileGroupSelection
{
	TArray<struct FTileGroupInfo>                      TileGroupOptions;                                          // 0x0000(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.IntensityContribution
// 0x0034
struct FIntensityContribution
{
	TEnumAsByte<FortniteGame_EFortCombatFactors>       CombatFactor;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortAIDirectorFactor>    ContributingAIDirectorFactor;                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_75E3[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxContribution;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bModifyContributionByCompletionPercentage;                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T3N2[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCurveTableRowHandle                        CompletionPercentageInitialMultiplier;                     // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        CompletionPercentageToStartReducingMultiplier;             // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        CompletionPercentageToStopReducingMultiplier;              // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bModifyByNumberOfCriticalEncounterGoals;                   // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0V3U[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.IntensityData
// 0x0020
struct FIntensityData
{
	TArray<struct FIntensityContribution>              ContributingFactors;                                       // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ContributionsTotal;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBuildingEditModeMetadata*>           ExceptionEditModes;                                        // 0x0010(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ExceptionEditModeWeight;                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIDirectorFactorData
// 0x0014
struct FFortAIDirectorFactorData
{
	TEnumAsByte<FortniteGame_EFortAIDirectorFactor>    AIDirectorFactor;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7LWE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFortAIDirectorFactorContribution>   ContributingEvents;                                        // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIPawnVariantDefinition
// 0x0048
struct FFortAIPawnVariantDefinition
{
	class UClass*                                      PawnClass;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        VariantWeightCurve;                                        // 0x0004(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              CurrentWeight;                                             // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           RequiredTagsQuery;                                         // 0x0014(0x0034) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.SpawnGroupEnemy
// 0x000C
struct FSpawnGroupEnemy
{
	class UClass*                                      EnemyVariantClass;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideVariantSpawnPointValue;                           // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSWD[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SpawnValue;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortSpawnGroupEncounterTypeData
// 0x0030
struct FFortSpawnGroupEncounterTypeData
{
	struct FGameplayTagContainer                       EncounterTypeTags;                                         // 0x0000(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        MaxGroupCategoryPopulationDensityCurve;                    // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        RespawnDelayCurve;                                         // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.SpawnGroupProgression
// 0x001C
struct FSpawnGroupProgression
{
	class UFortAISpawnGroup*                           SpawnGroup;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        MaxPopulationDensityCurve;                                 // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        SpawnDelayCurve;                                           // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TeamSpottedActorInfo
// 0x000C (0x0018 - 0x000C)
struct FTeamSpottedActorInfo : public FFastArraySerializerItem
{
	float                                              ExpirationTime;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                       Spotter;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SpottedActor;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.TeamSpottedActorInfoArray
// 0x0010 (0x0090 - 0x0080)
struct FTeamSpottedActorInfoArray : public FFastArraySerializer
{
	TArray<struct FTeamSpottedActorInfo>               SpottedActorInfo;                                          // 0x0080(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class AFortTeamInfo*                               OwningTeam;                                                // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.GameDifficultyInfo
// 0x0048
struct FGameDifficultyInfo : public FTableRowBase
{
	float                                              GrowthDLStart;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrowthDLCap;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LootLevel;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbsoluteDifficulty;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RelativeDifficulty;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredRating;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PvPRating;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RecommendedRating;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScoreBonus;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XPMult;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LootTierGroup;                                             // 0x0028(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ThreatDisplayName;                                         // 0x0034(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       ColorParamName;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortQuestRewardNotification
// 0x0030
struct FFortQuestRewardNotification
{
	struct FString                                     QuestId;                                                   // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMcpLootResult                              Loot;                                                      // 0x000C(0x0024) (NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.CardPackResultNotification
// 0x0028
struct FCardPackResultNotification
{
	struct FMcpLootResult                              LootGranted;                                               // 0x0000(0x0024) (NativeAccessSpecifierPublic)
	int                                                DisplayLevel;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortLootNotification
// 0x003C
struct FFortLootNotification
{
	struct FString                                     LootSource;                                                // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LootSourceInstance;                                        // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMcpLootResult                              LootGranted;                                               // 0x0018(0x0024) (NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortNotificationLevelUp
// 0x004C
struct FFortNotificationLevelUp
{
	int                                                Level;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HeroId;                                                    // 0x0004(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortLootNotification                       Loot;                                                      // 0x0010(0x003C) (NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionCompletionNotification
// 0x0034
struct FFortMissionCompletionNotification
{
	bool                                               bWasCritical;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MI6V[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MissionName;                                               // 0x0004(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMcpLootResult                              LootGranted;                                               // 0x0010(0x0024) (NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortZoneEvent
// 0x0014
struct FFortZoneEvent
{
	struct FName                                       EventType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     EventFocus;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataAsset*                                  EventContent;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      EventInstigator;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.QuickBarAndSlot
// 0x0008
struct FQuickBarAndSlot
{
	TEnumAsByte<FortniteGame_EFortQuickBars>           QuickBarType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2B3E[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QuickBarSlot;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionActorRecord
// 0x0050
struct FFortMissionActorRecord
{
	class UClass*                                      MissionActorClass;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8XIM[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  MissionActorTransform;                                     // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              MissionActorData;                                          // 0x0040(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T0Q3[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortObjectiveRecord
// 0x0010
struct FFortObjectiveRecord
{
	class UClass*                                      ObjectiveClass;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ObjectiveData;                                             // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionRecord
// 0x00C4
struct FFortMissionRecord
{
	struct FFortMissionEntry                           MissionEntry;                                              // 0x0000(0x0058) (NativeAccessSpecifierPublic)
	class UFortMissionGenerator*                       MissionGenerator;                                          // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortGeneratedDifficultyOptions             GeneratedMissionOptions;                                   // 0x005C(0x0034) (Transient, NativeAccessSpecifierPublic)
	int                                                DayGenerated;                                              // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UIIndex;                                                   // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortMissionStatus>       MissionStatus;                                             // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_408Q[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFortObjectiveRecord>                ObjectiveRecords;                                          // 0x009C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              MissionData;                                               // 0x00A8(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       MissionGuid;                                               // 0x00B4(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortMissionManagerRecord
// 0x0028
struct FFortMissionManagerRecord
{
	class UClass*                                      MissionManagerClass;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionActorRecord>             MissionActorRecords;                                       // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionRecord>                  MissionRecords;                                            // 0x0010(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              MissionManagerData;                                        // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMissionGenerationElementCostAndAvailabilityRow
// 0x0014
struct FFortMissionGenerationElementCostAndAvailabilityRow : public FTableRowBase
{
	class UCurveTable*                                 AvailabilityCurveTable;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       AvailabilityCurveTableRow;                                 // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinCost;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxCost;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortPlacementDistanceRequirements
// 0x0008
struct FFortPlacementDistanceRequirements
{
	float                                              DistanceRangeMin;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceRangeMax;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortWorldAuxData
// 0x0030
struct FFortWorldAuxData
{
	struct FString                                     WUID;                                                      // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurPlayers;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowInvites;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bShouldAdvertise;                                          // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowJoinViaPresence;                                     // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowJoinViaPresenceFriendsOnly;                          // 0x0023(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_046P[0xC];                                     // 0x0024(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortLinearSpline
// 0x0001
struct FFortLinearSpline
{
	unsigned char                                      UnknownData_IPSW[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortFeedbackEvent
// 0x001C
struct FFortFeedbackEvent
{
	class AFortPawn*                                   Instigator;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                                   Recipient;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortFeedbackHandle                         Handle;                                                    // 0x0008(0x0010) (Edit, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortSurfaceDamageRatioStats
// 0x0060
struct FFortSurfaceDamageRatioStats : public FTableRowBase
{
	struct FName                                       Default;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       Wood;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       Stone;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       Metal;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       HumanEntity;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       AIEntity;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       Explosive;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       WeakSpot;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       Objective;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       WeakSpot_Wood;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       WeakSpot_Stone;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       WeakSpot_Metal;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortSurfaceDamageRatioByAffiliationStats
// 0x000C
struct FFortSurfaceDamageRatioByAffiliationStats : public FTableRowBase
{
	float                                              Friendly;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Neutral;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Hostile;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct FortniteGame.FortPlayerPawnStats
// 0x003C (0x006C - 0x0030)
struct FFortPlayerPawnStats : public FFortPawnStats
{
	float                                              MaxJumpTime;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxStamina;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StaminaRegenRate;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StaminaRegenDelay;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SprintingStaminaExpenditureRate;                           // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HealthRegenRate;                                           // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HealthRegenDelay;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HealthRegenThreshold;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxShield;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ShieldRegenRate;                                           // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ShieldRegenDelay;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ShieldRegenThreshold;                                      // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              JumpStaminaCost;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ControlStrength;                                           // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ControlResistance;                                         // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.BuildingBonusDescription
// 0x0014
struct FBuildingBonusDescription
{
	int                                                Rating;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               Descriptions;                                              // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsNew;                                                    // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3MPS[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.MyTownBuildingUpgradeRequirements
// 0x002C
struct FMyTownBuildingUpgradeRequirements
{
	int                                                RequiredAccountLevel;                                      // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredResources[0x4];                                    // 0x0004(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UR1Y[0x18];                                    // 0x0014(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortAttributeValuePair
// 0x0008
struct FFortAttributeValuePair
{
	unsigned char                                      UnknownData_Z3T1[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortGameplayEffectContext
// 0x0028 (0x0070 - 0x0048)
struct FFortGameplayEffectContext : public FGameplayEffectContext
{
	bool                                               bIsFatalHit;                                               // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsCriticalHit;                                            // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsFullBodyHit;                                            // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UKWL[0x1];                                     // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              KnockbackMagnitude;                                        // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KnockbackZAngle;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeMagnitude;                                           // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ItemGuid;                                                  // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UObject*                                     DamageSourceObject;                                        // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SourceLevel;                                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FortniteGame.FortWeakSpotPosition
// 0x001C
struct FFortWeakSpotPosition
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bValidSpot;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PT10[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortKeepAmmoStash
// 0x0024
struct FFortKeepAmmoStash : public FTableRowBase
{
	int                                                Max1;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cooldown1;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max2;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cooldown2;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max3;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cooldown3;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max4;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cooldown4;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PickupTier;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortKeepItemGroup
// 0x000C
struct FFortKeepItemGroup : public FTableRowBase
{
	int                                                Items;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTier;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BaseLevel;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortKeepResourceGroup
// 0x0030
struct FFortKeepResourceGroup : public FTableRowBase
{
	struct FName                                       Container;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ResourceName;                                              // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TAssetPtr<class UFortItemDefinition>               FullPath;                                                  // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCap
// 0x0018
struct FFortAIEncounterSpawnGroupCap
{
	struct FCurveTableRowHandle                        MinSpawnGroupNumberCap;                                    // 0x0000(0x000C) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        MaxSpawnGroupNumberCap;                                    // 0x000C(0x000C) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCapsCategory
// 0x0048
struct FFortAIEncounterSpawnGroupCapsCategory
{
	struct FGameplayTagQuery                           TagQuery;                                                  // 0x0000(0x0034) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bApplyGroupPopulationCurveToCategoryMax;                   // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SASL[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFortAIEncounterSpawnGroupCap>       SpawnGroupCapsPerPlayerCount;                              // 0x0038(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              NumActiveCategorySpawnGroups;                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCapsProfile
// 0x0024
struct FFortAIEncounterSpawnGroupCapsProfile
{
	struct FGameplayTagContainer                       EncounterTypeTags;                                         // 0x0000(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterSpawnGroupCapsCategory> PopulationCategories;                                      // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMontageInputAction
// 0x0014
struct FFortMontageInputAction
{
	struct FGameplayTag                                TriggerAbilityTag;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       NextSection;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortMontageInputType>    InputType;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ASH[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.MyFortCategoryData
// 0x0034
struct FMyFortCategoryData
{
	struct FText                                       CategoryName;                                              // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ModifiedTagContainer;                                      // 0x000C(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsCore;                                                   // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CN5Q[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayAttribute>                  Attributes;                                                // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ThreatCloudMeshInfo
// 0x0024
struct FThreatCloudMeshInfo
{
	TWeakObjectPtr<class AThreatCloud>                 CloudActor;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UStaticMeshComponent>         CloudMeshComponent;                                        // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMaterialInstanceDynamic>     CloudMID;                                                  // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector                                     FinalScale;                                                // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ThreatCloudInfluenceInfo
// 0x003C
struct FThreatCloudInfluenceInfo
{
	struct FThreatCloudMeshInfo                        CloudMeshInfo;                                             // 0x0000(0x0024) (Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H51H[0x18];                                    // 0x0024(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.TileGroupMapInfo
// 0x0024
struct FTileGroupMapInfo
{
	TAssetPtr<class UWorld>                            GroupWorld;                                                // 0x0000(0x0018) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Weight;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       QuotaCategory;                                             // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ProjectileEventData
// 0x001C
struct FProjectileEventData
{
	class AFortProjectileBase*                         SpawnedProjectile;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          Hits;                                                      // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ExplodedActors;                                            // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MtxPackage
// 0x003C
struct FMtxPackage
{
	struct FString                                     OfferId;                                                   // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                TotalAmount;                                               // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BonusAmount;                                               // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Price;                                                     // 0x0020(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TGTC[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SaleBasePrice;                                             // 0x0030(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.GameSummaryInfo
// 0x0010
struct FGameSummaryInfo
{
	struct FString                                     GameSessionID;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Completed;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FWA2[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortCatalogMeta
// 0x0010
struct FFortCatalogMeta
{
	TArray<class UFortAccountItemDefinition*>          ChaseItems;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortCardPackItemDefinition*                 PackDefinition;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortLoginReward
// 0x001C
struct FFortLoginReward : public FTableRowBase
{
	TAssetPtr<class UFortAccountItemDefinition>        ItemDefinition;                                            // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortDayPhaseCallbackHandle
// 0x0010
struct FFortDayPhaseCallbackHandle
{
	unsigned char                                      UnknownData_RCKF[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.ChoiceData
// 0x0020
struct FChoiceData
{
	int                                                MenuIdentifier;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowCloseButton;                                          // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NZ2I[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Title;                                                     // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FChoiceDataEntry>                    Items;                                                     // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ItemCategoryMappingData
// 0x0010
struct FItemCategoryMappingData
{
	TEnumAsByte<FortniteGame_EFortItemType>            CategoryType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_506V[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CategoryName;                                              // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.SkyLightValues
// 0x0024
struct FSkyLightValues
{
	struct FLinearColor                                SkyLightColor;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                SkyLightOcclusionTint;                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SkyLightMinOcclusion;                                      // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ElementalCharValues
// 0x0014
struct FElementalCharValues
{
	struct FLinearColor                                FireCharColor;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ElectricalCharEmissive;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.DirectionalLightValues
// 0x0008
struct FDirectionalLightValues
{
	struct FColor                                      LightColor;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Brightness;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ExponentialHeightFogValues
// 0x0038
struct FExponentialHeightFogValues
{
	float                                              FogDensity;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FogHeightFalloff;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FogMaxOpacity;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartDistance;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirectionalInscatteringExponent;                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirectionalInscatteringStartDistance;                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DirectionalInscatteringColor;                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                FogInscatteringColor;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.CloudColorState
// 0x0050
struct FCloudColorState
{
	struct FLinearColor                                BottomEmissive;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                TopEmissive;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                BottomLightning;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                TopLightning;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                InternalColor;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ThreatCloudValues
// 0x00A0
struct FThreatCloudValues
{
	struct FCloudColorState                            CloudActivated;                                            // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCloudColorState                            CloudDeactivated;                                          // 0x0050(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.DayPhaseInfo
// 0x014C
struct FDayPhaseInfo
{
	struct FString                                     PhaseStartAnnouncement;                                    // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimePhaseBegins;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhaseLengthInHours;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentageTransitionIn;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionInTimeInMinutes;                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentageTransitionOut;                                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionOutTimeInMinutes;                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkyLightValues                             SkyLightValues;                                            // 0x0024(0x0024) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FThreatCloudValues                          ThreatCloudValues;                                         // 0x0048(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FElementalCharValues                        ElementalCharValues;                                       // 0x00E8(0x0014) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDirectionalLightValues                     DirectionalLightValues;                                    // 0x00FC(0x0008) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FExponentialHeightFogValues                 ExpHeightFogValues;                                        // 0x0104(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class APostProcessVolume*                          PostProcessVolume;                                         // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APostProcessVolume*                          LowPriPostProcessVolume;                                   // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           SkyMaterialInstance;                                       // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           StarMapMaterialInstance;                                   // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.DecoPlacementState
// 0x0080
struct FDecoPlacementState
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     RawLocation;                                               // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                       AbsoluteRotation;                                          // 0x0030(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     GridLocation;                                              // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PreviousLocation;                                          // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     FallbackLocation;                                          // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       LastHitActor;                                              // 0x0064(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ABuildingSMActor>             CurrentBuildingActorAttachment;                            // 0x006C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortDecoPlacementQueryResults> CanPlaceState;                                             // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YT4[0xB];                                     // 0x0075(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortHighlightColors
// 0x0030
struct FFortHighlightColors
{
	struct FLinearColor                                OutlineColor;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                SceneModulationColor1;                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                SceneModulationColor2;                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortHighlightColorsContainer
// 0x0060
struct FFortHighlightColorsContainer
{
	struct FFortHighlightColors                        ValidHighlight;                                            // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortHighlightColors                        InvalidHighlight;                                          // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.OutpostUpgradesPerTheaterData
// 0x0008
struct FOutpostUpgradesPerTheaterData
{
	int                                                TheaterSlot;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  OutpostUpgradesData;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.OutpostFabricatorPerTheaterData
// 0x0008
struct FOutpostFabricatorPerTheaterData
{
	int                                                TheaterSlot;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortItemTier>            MaxAllowedTier;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IPG2[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.OutpostPrestigeEffects
// 0x000C
struct FOutpostPrestigeEffects
{
	TArray<class UClass*>                              EnemyPrestigeEffect;                                       // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.OutpostPrestigeEffectsPerTheater
// 0x0010
struct FOutpostPrestigeEffectsPerTheater
{
	int                                                TheaterSlot;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOutpostPrestigeEffects                     PrestigeEffects;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPartyMemberRepState
// 0x003C (0x0040 - 0x0004)
struct FFortPartyMemberRepState : public FPartyMemberRepState
{
	TEnumAsByte<FortniteGame_EFortPartyMemberLocation> Location;                                                  // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JDH7[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MatchmakingLevel;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZoneInstanceId;                                            // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentCharXP;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HeroId;                                                    // 0x001C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HeroTypeRefName;                                           // 0x0028(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortCustomGender>        CharacterGender;                                           // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R4HV[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            HomeBaseVersion;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.ActiveFortCamera
// 0x0014
struct FActiveFortCamera
{
	class UFortCameraMode*                             Camera;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ViewTarget;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionAlpha;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionUpdateRate;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendWeight;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCameraInstanceEntry
// 0x000C
struct FFortCameraInstanceEntry
{
	class UClass*                                      CameraClass;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ViewTarget;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortCameraMode*                             Camera;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCameraModeOverride
// 0x0008
struct FFortCameraModeOverride
{
	class UClass*                                      OriginalClass;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ClassOverride;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortCameraPrototype
// 0x0020
struct FFortCameraPrototype
{
	struct FName                                       PrototypeName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrototypeDescription;                                      // 0x0008(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortCameraModeOverride>             ModeOverrides;                                             // 0x0014(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortPlayerDeathReport
// 0x0018
struct FFortPlayerDeathReport
{
	float                                              ServerTimeForRespawn;                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LethalDamage;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerState*                            KillerPlayerState;                                         // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                                   KillerPawn;                                                // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDroppedBackpack : 1;                                      // 0x0014(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1GM5[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.DepositedResources
// 0x0010
struct FDepositedResources
{
	struct FString                                     TemplateId;                                                // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MorphValuePair
// 0x000C
struct FMorphValuePair
{
	struct FName                                       MorphName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MorphValue;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.AccumulatedItemEntry
// 0x0008
struct FAccumulatedItemEntry
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortMiniMapData
// 0x0074
struct FFortMiniMapData
{
	class UTexture2D*                                  MiniMapIcon;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   IconScale;                                                 // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseIconSize : 1;                                          // 0x000C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseTeamAffiliationColors : 1;                             // 0x000C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C282[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                FriendColor;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                EnemyColor;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                NeutralColor;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                PulseColor;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ColorPulsesPerSecond;                                      // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SizePulsesPerSecond;                                       // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewableDistance;                                          // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsVisible : 1;                                            // 0x0070(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J4P9[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortPresenceBasicInfo
// 0x0018
struct FFortPresenceBasicInfo
{
	int                                                HomeBaseRating;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BannerPatternIndex;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BannerColor;                                               // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortGiftGiver
// 0x0004 (0x001C - 0x0018)
struct FFortGiftGiver : public FFortGiftingInfo
{
	int                                                NumItemsGiven;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.MyTownBuildingUpgradeData
// 0x0038
struct FMyTownBuildingUpgradeData : public FTableRowBase
{
	struct FName                                       BuildingName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BuildingLevel;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredAccountLevel;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CostPower;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CostManufacturingParts;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CostSupplies;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CostFood;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequiredTownGPAttributes;                                  // 0x0020(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequiredItems;                                             // 0x002C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortUITeamMember
// 0x002C
struct FFortUITeamMember
{
	unsigned char                                      UnknownData_0FDS[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortPartyMemberState*                       PartyMemberState;                                          // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortLobbyBeaconPlayerState*                 LobbyPlayerState;                                          // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerState*                            ZonePlayerState;                                           // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTQY[0x8];                                     // 0x0024(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteGame.FortQuestManagerAttributes
// 0x000C
struct FFortQuestManagerAttributes
{
	struct FDateTime                                   DailyLoginInterval;                                        // 0x0000(0x0008) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                DailyQuestRerolls;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteGame.FortDailyQuestRerollNotification
// 0x000C
struct FFortDailyQuestRerollNotification
{
	struct FString                                     NewQuestId;                                                // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
