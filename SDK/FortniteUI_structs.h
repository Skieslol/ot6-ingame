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

// Enum FortniteUI.EFortFrontEndFeatureState
enum class FortniteUI_EFortFrontEndFeatureState : uint8_t
{
	EFortFrontEndFeatureState__Enabled = 0,
	EFortFrontEndFeatureState__NoHeroes = 1,
	EFortFrontEndFeatureState__NoRecruitableHeroes = 2,
	EFortFrontEndFeatureState__DisabledByTutorial = 3,
	EFortFrontEndFeatureState__Invalid = 4,
	EFortFrontEndFeatureState__EFortFrontEndFeatureState_MAX = 5,

};

// Enum FortniteUI.EFortFrontEndFeature
enum class FortniteUI_EFortFrontEndFeature : uint8_t
{
	EFortFrontEndFeature__ShowHomeBase = 0,
	EFortFrontEndFeature__ShowHeroList = 1,
	EFortFrontEndFeature__ShowVault = 2,
	EFortFrontEndFeature__ShowStore = 3,
	EFortFrontEndFeature__PlayZone = 4,
	EFortFrontEndFeature__ShowDailyRewards = 5,
	EFortFrontEndFeature__ShowHeroSelect = 6,
	EFortFrontEndFeature__RecruitHero = 7,
	EFortFrontEndFeature__ShowHomeBaseOverview = 8,
	EFortFrontEndFeature__MAX_None = 9,
	EFortFrontEndFeature__EFortFrontEndFeature_MAX = 10,

};

// Enum FortniteUI.EFortUIFeatureState
enum class FortniteUI_EFortUIFeatureState : uint8_t
{
	EFortUIFeatureState__Enabled   = 0,
	EFortUIFeatureState__DisabledByTutorial = 1,
	EFortUIFeatureState__Invalid   = 2,
	EFortUIFeatureState__EFortUIFeatureState_MAX = 3,

};

// Enum FortniteUI.EFortUIFeature
enum class FortniteUI_EFortUIFeature : uint8_t
{
	EFortUIFeature__ShowPartyBar   = 0,
	EFortUIFeature__ShowChatWindow = 1,
	EFortUIFeature__ShowFriendsMenu = 2,
	EFortUIFeature__MAX_None       = 3,
	EFortUIFeature__EFortUIFeature_MAX = 4,

};

// Enum FortniteUI.EFlagStatus
enum class FortniteUI_EFlagStatus : uint8_t
{
	EFlagStatus__FlagPresent       = 0,
	EFlagStatus__FlagNotPresent    = 1,
	EFlagStatus__EFlagStatus_MAX   = 2,

};

// Enum FortniteUI.EFortDialogFeedbackType
enum class FortniteUI_EFortDialogFeedbackType : uint8_t
{
	EFortDialogFeedbackType__FriendRequestSent = 0,
	EFortDialogFeedbackType__FriendRequestReceived = 1,
	EFortDialogFeedbackType__FriendRequestAccepted = 2,
	EFortDialogFeedbackType__Default = 3,
	EFortDialogFeedbackType__EFortDialogFeedbackType_MAX = 4,

};

// Enum FortniteUI.EFortDialogResult
enum class FortniteUI_EFortDialogResult : uint8_t
{
	EFortDialogResult__Confirmed   = 0,
	EFortDialogResult__Declined    = 1,
	EFortDialogResult__Ignored     = 2,
	EFortDialogResult__Killed      = 3,
	EFortDialogResult__TimedOut    = 4,
	EFortDialogResult__Unknown     = 5,
	EFortDialogResult__EFortDialogResult_MAX = 6,

};

// Enum FortniteUI.EFortHitPointModificationReason
enum class FortniteUI_EFortHitPointModificationReason : uint8_t
{
	EFortHitPointModificationReason__Invalid = 0,
	EFortHitPointModificationReason__InitalSet = 1,
	EFortHitPointModificationReason__AutoRegen = 2,
	EFortHitPointModificationReason__ItemRegen = 3,
	EFortHitPointModificationReason__DamageOverTime = 4,
	EFortHitPointModificationReason__DamageReceived = 5,
	EFortHitPointModificationReason__EFortHitPointModificationReason_MAX = 6,

};

// Enum FortniteUI.EFortBuildingInteraction
enum class FortniteUI_EFortBuildingInteraction : uint8_t
{
	EFortBuildingInteraction__None = 0,
	EFortBuildingInteraction__Build = 1,
	EFortBuildingInteraction__Repair = 2,
	EFortBuildingInteraction__Upgrade = 3,
	EFortBuildingInteraction__Edit = 4,
	EFortBuildingInteraction__BeingModified = 5,
	EFortBuildingInteraction__ConfirmEdit = 6,
	EFortBuildingInteraction__EFortBuildingInteraction_MAX = 7,

};

// Enum FortniteUI.EFortBuildingHealthDisplayRule
enum class FortniteUI_EFortBuildingHealthDisplayRule : uint8_t
{
	EFortBuildingHealthDisplayRule__Never = 0,
	EFortBuildingHealthDisplayRule__Allowed = 1,
	EFortBuildingHealthDisplayRule__Always = 2,
	EFortBuildingHealthDisplayRule__EFortBuildingHealthDisplayRule_MAX = 3,

};

// Enum FortniteUI.EFortStoreState
enum class FortniteUI_EFortStoreState : uint8_t
{
	EFortStoreState__Error         = 0,
	EFortStoreState__WaitingForResponse = 1,
	EFortStoreState__Closed        = 2,
	EFortStoreState__CardPackStore = 3,
	EFortStoreState__CurrencyStore = 4,
	EFortStoreState__WebPayment    = 5,
	EFortStoreState__PackOpen      = 6,
	EFortStoreState__CardEnter     = 7,
	EFortStoreState__CardBackReveal = 8,
	EFortStoreState__CardFlip      = 9,
	EFortStoreState__CardFrontReveal = 10,
	EFortStoreState__CardExit      = 11,
	EFortStoreState__SummaryAdd    = 12,
	EFortStoreState__PackDestroy   = 13,
	EFortStoreState__Summary       = 14,
	EFortStoreState__MAX_None      = 15,
	EFortStoreState__EFortStoreState_MAX = 16,

};

// Enum FortniteUI.EFortTutorialGlowType
enum class FortniteUI_EFortTutorialGlowType : uint8_t
{
	EFortTutorialGlowType__None    = 0,
	EFortTutorialGlowType__Look    = 1,
	EFortTutorialGlowType__Click   = 2,
	EFortTutorialGlowType__EFortTutorialGlowType_MAX = 3,

};

// Enum FortniteUI.EFortBangSize
enum class FortniteUI_EFortBangSize : uint8_t
{
	EFortBangSize__XXS             = 0,
	EFortBangSize__XS              = 1,
	EFortBangSize__S               = 2,
	EFortBangSize__M               = 3,
	EFortBangSize__L               = 4,
	EFortBangSize__XL              = 5,
	EFortBangSize__EFortBangSize_MAX = 6,

};

// Enum FortniteUI.EFortUIState
enum class FortniteUI_EFortUIState : uint8_t
{
	EFortUIState__Invalid          = 0,
	EFortUIState__Login            = 1,
	EFortUIState__JoinServer       = 2,
	EFortUIState__FrontEnd         = 3,
	EFortUIState__PvE_PostGame     = 4,
	EFortUIState__PvP_PostGame     = 5,
	EFortUIState__InGame           = 6,
	EFortUIState__Cinematic        = 7,
	EFortUIState__MAX              = 8,
	EFortUIState__EFortUIState_MAX = 9,

};

// Enum FortniteUI.EGridSortKind
enum class FortniteUI_EGridSortKind : uint8_t
{
	EGridSortKind__None            = 0,
	EGridSortKind__ByNumber        = 1,
	EGridSortKind__ByString        = 2,
	EGridSortKind__ByNumberThenString = 3,
	EGridSortKind__ByStringThenNumber = 4,
	EGridSortKind__EGridSortKind_MAX = 5,

};

// Enum FortniteUI.EButtonGroupDirection
enum class FortniteUI_EButtonGroupDirection : uint8_t
{
	EButtonGroupDirection__Horizontal = 0,
	EButtonGroupDirection__Vertical = 1,
	EButtonGroupDirection__EButtonGroupDirection_MAX = 2,

};

// Enum FortniteUI.EFortSocialPanelTab
enum class FortniteUI_EFortSocialPanelTab : uint8_t
{
	EFortSocialPanelTab__PartyInvitations = 0,
	EFortSocialPanelTab__Friends   = 1,
	EFortSocialPanelTab__RecentPlayers = 2,
	EFortSocialPanelTab__Max       = 3,
	EFortSocialPanelTab__EFortSocialPanelTab_MAX = 4,

};

// Enum FortniteUI.EFortSocialPanelType
enum class FortniteUI_EFortSocialPanelType : uint8_t
{
	EFortSocialPanelType__Join     = 0,
	EFortSocialPanelType__Invite   = 1,
	EFortSocialPanelType__Max      = 2,
	EFortSocialPanelType__EFortSocialPanelType_MAX = 3,

};

// Enum FortniteUI.EModalContainerSize
enum class FortniteUI_EModalContainerSize : uint8_t
{
	EModalContainerSize__ExtraSmall = 0,
	EModalContainerSize__Small     = 1,
	EModalContainerSize__Medium    = 2,
	EModalContainerSize__Large     = 3,
	EModalContainerSize__Max       = 4,
	EModalContainerSize__EModalContainerSize_MAX = 5,

};

// Enum FortniteUI.ENotificationType
enum class FortniteUI_ENotificationType : uint8_t
{
	ENotificationType__Basic       = 0,
	ENotificationType__Friends     = 1,
	ENotificationType__ENotificationType_MAX = 2,

};

// Enum FortniteUI.ENotificationResult
enum class FortniteUI_ENotificationResult : uint8_t
{
	ENotificationResult__Confirmed = 0,
	ENotificationResult__Declined  = 1,
	ENotificationResult__Unknown   = 2,
	ENotificationResult__ENotificationResult_MAX = 3,

};

// Enum FortniteUI.EFortInventoryContext
enum class FortniteUI_EFortInventoryContext : uint8_t
{
	EFortInventoryContext__Game    = 0,
	EFortInventoryContext__Lobby   = 1,
	EFortInventoryContext__FrontEnd = 2,
	EFortInventoryContext__Pickup  = 3,
	EFortInventoryContext__EFortInventoryContext_MAX = 4,

};

// Enum FortniteUI.ENameStatus
enum class FortniteUI_ENameStatus : uint8_t
{
	ENameStatus__Valid             = 0,
	ENameStatus__TooShort          = 1,
	ENameStatus__TooLong           = 2,
	ENameStatus__ContainsInvalidCharacter = 3,
	ENameStatus__ENameStatus_MAX   = 4,

};

// Enum FortniteUI.EFortLegacySlateWidget
enum class FortniteUI_EFortLegacySlateWidget : uint8_t
{
	EFortLegacySlateWidget__None   = 0,
	EFortLegacySlateWidget__Options = 1,
	EFortLegacySlateWidget__FriendsList = 2,
	EFortLegacySlateWidget__Feedback = 3,
	EFortLegacySlateWidget__Minimap = 4,
	EFortLegacySlateWidget__DefaultObjective = 5,
	EFortLegacySlateWidget__Mission = 6,
	EFortLegacySlateWidget__Chat   = 7,
	EFortLegacySlateWidget__HUDContextInfo = 8,
	EFortLegacySlateWidget__CenterPopupMessage = 9,
	EFortLegacySlateWidget__PinnedSchematics = 10,
	EFortLegacySlateWidget__Results = 11,
	EFortLegacySlateWidget__CraftingInfo = 12,
	EFortLegacySlateWidget__ClientNotification = 13,
	EFortLegacySlateWidget__MAX    = 14,
	EFortLegacySlateWidget__EFortLegacySlateWidget_MAX = 15,

};

// Enum FortniteUI.EModalContainerSlot
enum class FortniteUI_EModalContainerSlot : uint8_t
{
	EModalContainerSlot__Top       = 0,
	EModalContainerSlot__Middle    = 1,
	EModalContainerSlot__Bottom    = 2,
	EModalContainerSlot__Background = 3,
	EModalContainerSlot__Max       = 4,
	EModalContainerSlot__EModalContainerSlot_MAX = 5,

};

// Enum FortniteUI.EPauseType
enum class FortniteUI_EPauseType : uint8_t
{
	EPauseType__NoPause            = 0,
	EPauseType__Rare               = 1,
	EPauseType__New                = 2,
	EPauseType__NewAndRare         = 3,
	EPauseType__EPauseType_MAX     = 4,

};

// Enum FortniteUI.ECardPackPurchaseError
enum class FortniteUI_ECardPackPurchaseError : uint8_t
{
	ECardPackPurchaseError__PendingServerConfirmation = 0,
	ECardPackPurchaseError__NotEnoughMtx = 1,
	ECardPackPurchaseError__NoneLeft = 2,
	ECardPackPurchaseError__PurchaseAlreadyPending = 3,
	ECardPackPurchaseError__NoConnection = 4,
	ECardPackPurchaseError__ECardPackPurchaseError_MAX = 5,

};

// Enum FortniteUI.EFortStoreTransition
enum class FortniteUI_EFortStoreTransition : uint8_t
{
	EFortStoreTransition__X        = 0,
	EFortStoreTransition__EFortStoreTransition_MAX = 1,

};

// Enum FortniteUI.EFortButtonState
enum class FortniteUI_EFortButtonState : uint8_t
{
	EFortButtonState__Up           = 0,
	EFortButtonState__Over         = 1,
	EFortButtonState__Down         = 2,
	EFortButtonState__Release      = 3,
	EFortButtonState__Out          = 4,
	EFortButtonState__Disabled     = 5,
	EFortButtonState__KB_Down      = 6,
	EFortButtonState__KB_Release   = 7,
	EFortButtonState__Max          = 8,
	EFortButtonState__EFortButtonState_MAX = 9,

};

// Enum FortniteUI.EPageDirection
enum class FortniteUI_EPageDirection : uint8_t
{
	EPageDirection__Page_Left      = 0,
	EPageDirection__Page_Right     = 1,
	EPageDirection__Page_MAX       = 2,

};

// Enum FortniteUI.EUILoginStatus
enum class FortniteUI_EUILoginStatus : uint8_t
{
	EUILoginStatus__Invalid        = 0,
	EUILoginStatus__LoggedOut      = 1,
	EUILoginStatus__LoggingIn      = 2,
	EUILoginStatus__LoginFailed    = 3,
	EUILoginStatus__LoginSuccess   = 4,
	EUILoginStatus__EUILoginStatus_MAX = 5,

};

// Enum FortniteUI.EVaultCommandType
enum class FortniteUI_EVaultCommandType : uint8_t
{
	EVaultCommandType__Upgrade     = 0,
	EVaultCommandType__Customize   = 1,
	EVaultCommandType__Recycle     = 2,
	EVaultCommandType__Retire      = 3,
	EVaultCommandType__Boost       = 4,
	EVaultCommandType__EVaultCommandType_MAX = 5,

};

// Enum FortniteUI.EVaultContentSortType
enum class FortniteUI_EVaultContentSortType : uint8_t
{
	EVaultContentSortType__ByName  = 0,
	EVaultContentSortType__ByCraftingTier = 1,
	EVaultContentSortType__ByLevel = 2,
	EVaultContentSortType__ByCategory = 3,
	EVaultContentSortType__ByRarity = 4,
	EVaultContentSortType__ByType  = 5,
	EVaultContentSortType__ByLocation = 6,
	EVaultContentSortType__ByPersonality = 7,
	EVaultContentSortType__ByBonus = 8,
	EVaultContentSortType__EVaultContentSortType_MAX = 9,

};

// Enum FortniteUI.EVaultContentType
enum class FortniteUI_EVaultContentType : uint8_t
{
	EVaultContentType__Heroes      = 0,
	EVaultContentType__Schematics  = 1,
	EVaultContentType__Personnel   = 2,
	EVaultContentType__Misc        = 3,
	EVaultContentType__EVaultContentType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FortniteUI.FortDialogDescription
// 0x0050
struct FFortDialogDescription
{
	struct FText                                       MessageHeader;                                             // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       MessageBody;                                               // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       AcceptButtonText;                                          // 0x0018(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       IgnoreButtonText;                                          // 0x0024(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       DismissButtonText;                                         // 0x0030(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              DisplayTime;                                               // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortUserWidget*                             AdditionalContent;                                         // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFortDialogFeedbackType>    FeedBackType;                                              // 0x0044(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXLK[0xB];                                     // 0x0045(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.FortStateStyle
// 0x02D8
struct FFortStateStyle
{
	struct FFortMultiSizeBrush                         Brush;                                                     // 0x0000(0x02B8) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                                PrimaryColor;                                              // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                SecondaryColor;                                            // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
// 0x0010
struct FFortFrontEndFeatureStruct
{
	TEnumAsByte<FortniteUI_EFortFrontEndFeatureState>  CurrentState;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFortFrontEndFeatureState>  ForcedState;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YS0S[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ChangeDelegate;                                            // 0x0004(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.FortUIFeatureStruct
// 0x0010
struct FFortUIFeatureStruct
{
	TEnumAsByte<FortniteUI_EFortUIFeatureState>        CurrentState;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJNT[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ChangeDelegate;                                            // 0x0004(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.FortBackendVersion
// 0x0070
struct FFortBackendVersion
{
	bool                                               bIsValid;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OGXI[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     App;                                                       // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ModuleName;                                                // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Branch;                                                    // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildDate;                                                 // 0x0028(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerDate;                                                // 0x0034(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Build;                                                     // 0x0040(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Changelist;                                                // 0x004C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OverridePropertiesVersion;                                 // 0x0058(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0064(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.HeroUIData
// 0x0018
struct FHeroUIData
{
	class UFortHero*                                   Hero;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSelected;                                               // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IIM3[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                XPRequirementForCurrentLevel;                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XPRequirementForNextLevel;                                 // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredXPToLevelUp;                                       // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMaxHeroLevel;                                           // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RODV[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.EmptyHeroSlot
// 0x000C
struct FEmptyHeroSlot
{
	class UFortHeroType*                               Type;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumAvailable;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasMale;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHasFemale;                                                // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6C59[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.FortFocusedBuildingInfo
// 0x0040
struct FFortFocusedBuildingInfo
{
	bool                                               bIsInteractable;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MYVN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     IndicatorRelativeLocation;                                 // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFortBuildingHealthDisplayRule> HealthDisplayRule;                                         // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9AU1[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxHealth;                                                 // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTrapAttached;                                           // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LH6C[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AttachedTrapMaxDurability;                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentLevel;                                              // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFortBuildingInteraction>   InteractionType;                                           // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XRP3[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InteractionCost;                                           // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UpgradeBonus;                                              // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortResourceType>        BuildingMaterial;                                          // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHostile;                                                // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2LS5[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ContextualText;                                            // 0x0034(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.FortKillerVisualInfo
// 0x0080
struct FFortKillerVisualInfo
{
	struct FSlateBrush                                 KillerBrush;                                               // 0x0000(0x0074) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       KillerName;                                                // 0x0074(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.FortItemListFilter
// 0x0010
struct FFortItemListFilter
{
	struct FString                                     SearchText;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortInventoryFilter>     FilterType;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInStorageVault;                                           // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJAK[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.FortModalContainerSizeEntry
// 0x001C
struct FFortModalContainerSizeEntry
{
	float                                              AbsoluteWidth;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TopPercent;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MiddlePercent;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BottomPercent;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VerticalPadding;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalPadding;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ContentPadding;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.Card
// 0x000C
struct FCard
{
	int                                                QuantityReceived;                                          // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                                   Item;                                                      // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EPauseType>                 PauseType;                                                 // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TOQ6[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.OpenedCardPack
// 0x0008
struct FOpenedCardPack
{
	class UFortCardPackItemDefinition*                 CardPackDefinition;                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisplayLevel;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.FortErrorInfo
// 0x002C
struct FFortErrorInfo
{
	struct FText                                       Operation;                                                 // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMessage;                                              // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     ErrorCode;                                                 // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D3G8[0x8];                                     // 0x0024(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.VaultPropertyInfo
// 0x0028
struct FVaultPropertyInfo
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ValueText;                                                 // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bPendingChange;                                            // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsPositiveChange;                                         // 0x0019(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VI24[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ChangedValueText;                                          // 0x001C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.VaultAlterationInfo
// 0x0008
struct FVaultAlterationInfo
{
	TEnumAsByte<FortniteGame_EFortAlteration>          SlotType;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YOMK[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortAlterationItemDefinition*               SlottedAlteration;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.FortMissionRewardInfo
// 0x0084
struct FFortMissionRewardInfo
{
	struct FSlateBrush                                 Icon;                                                      // 0x0000(0x0074) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0074(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortItem*                                   Item;                                                      // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.FortMissionDetails
// 0x0090
struct FFortMissionDetails
{
	TEnumAsByte<FortniteGame_EFortTheaterMapTileType>  TileType;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5Z9B[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TheaterDisplayName;                                        // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       MissionName;                                               // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       MissionDescription;                                        // 0x001C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortMissionGenerator*                       MissionDefinition;                                         // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ZoneName;                                                  // 0x002C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ZoneDescription;                                           // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       RegionThemeName;                                           // 0x0044(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TAssetPtr<class USlateBrushAsset>                  RegionThemeIcon;                                           // 0x0050(0x0018) (BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DifficultyName;                                            // 0x0068(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionRewardInfo>              MissionRewards;                                            // 0x0074(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimespan                                   AvailableTime;                                             // 0x0080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                RequiredBaseRating;                                        // 0x0088(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RecommendedBaseRating;                                     // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.CardPackOffer
// 0x003C
struct FCardPackOffer
{
	struct FText                                       Title;                                                     // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                MtxPrice;                                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuantityRemaining;                                         // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTimedOffer;                                               // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_33ZE[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFortCatalogMeta                            OfferMetaData;                                             // 0x0024(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WBES[0x8];                                     // 0x0034(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.VaultIngredientInfo
// 0x0090
struct FVaultIngredientInfo
{
	int                                                Count;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Image;                                                     // 0x001C(0x0074) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.VaultButtonInfo
// 0x0090
struct FVaultButtonInfo
{
	TEnumAsByte<FortniteUI_EVaultCommandType>          CommandType;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_201A[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CommandText;                                               // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bHasCost;                                                  // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PPME[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Cost;                                                      // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ResourceIcon;                                              // 0x0018(0x0074) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x008C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_77JR[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.VaultDetailsInfo
// 0x0620
struct FVaultDetailsInfo
{
	bool                                               bIsValid;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IUZC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 RarityColor;                                               // 0x0004(0x001C) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                                 RaritySecondaryColor;                                      // 0x0020(0x001C) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       MainHeader;                                                // 0x003C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       SubHeader1;                                                // 0x0048(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       SubHeader2;                                                // 0x0054(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLevel;                                                  // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       SubInfoText1;                                              // 0x0068(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                         SubInfoImage1;                                             // 0x0074(0x02B8) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       SubInfoText2;                                              // 0x032C(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                         SubInfoImage2;                                             // 0x0338(0x02B8) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x05F0(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FVaultPropertyInfo>                  Properties;                                                // 0x05FC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVaultIngredientInfo>                Ingredients;                                               // 0x0608(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVaultButtonInfo>                    Buttons;                                                   // 0x0614(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.VaultContentDetails
// 0x0010
struct FVaultContentDetails
{
	struct FString                                     SearchText;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EVaultContentSortType>      SortType;                                                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortInventoryFilter>     SubType;                                                   // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0G25[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.GridSortKey
// 0x0010
struct FGridSortKey
{
	float                                              Number;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.AttributeRequirement
// 0x0014
struct FAttributeRequirement
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequirementsMet;                                          // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WI5P[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.BuildingRequirements
// 0x0024
struct FBuildingRequirements
{
	int                                                RequiredAccountLevel;                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentAccountLevel;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeRequirement>               AttributeRequirements;                                     // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                RequiredPower;                                             // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentPower;                                              // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredManufacturing;                                     // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentManufacturing;                                      // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FortniteUI.HeroStat
// 0x0014
struct FHeroStat
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCategory;                                               // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4FMM[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FortniteUI.FortHeroNamesData
// 0x0024
struct FFortHeroNamesData : public FTableRowBase
{
	struct FString                                     FirstName;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NickName;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastName;                                                  // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
