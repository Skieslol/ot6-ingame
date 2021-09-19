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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FriendsAndChat.FriendsFontStyle
// 0x0120 (0x0124 - 0x0004)
struct FFriendsFontStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              FriendsFontSmall;                                          // 0x0004(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              FriendsFontSmallBold;                                      // 0x002C(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              FriendsFontNormal;                                         // 0x0054(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              FriendsFontNormalBold;                                     // 0x007C(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              FriendsFontLarge;                                          // 0x00A4(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              FriendsFontLargeBold;                                      // 0x00CC(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                                DefaultFontColor;                                          // 0x00F4(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                InvertedFontColor;                                         // 0x0104(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                DefaultDullFontColor;                                      // 0x0114(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FriendsAndChat.FriendsListStyle
// 0x2168 (0x216C - 0x0004)
struct FFriendsListStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                GlobalChatButtonStyle;                                     // 0x0004(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                                FriendItemButtonStyle;                                     // 0x0230(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                                ConfirmButtonStyle;                                        // 0x045C(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                                CancelButtonStyle;                                         // 0x0688(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ButtonContentColor;                                        // 0x08B4(0x001C) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ButtonHoverContentColor;                                   // 0x08D0(0x001C) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActionMenuArrowBrush;                                      // 0x08EC(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                                BackButtonStyle;                                           // 0x0960(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                                HeaderButtonStyle;                                         // 0x0B8C(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                                FriendListActionButtonStyle;                               // 0x0DB8(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 AddFriendButtonContentBrush;                               // 0x0FE4(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 StatusIconBrush;                                           // 0x1058(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FriendImageBrush;                                          // 0x10CC(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FortniteImageBrush;                                        // 0x1140(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FortniteDevImageBrush;                                     // 0x11B4(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FortniteTestImageBrush;                                    // 0x1228(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LauncherImageBrush;                                        // 0x129C(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UTImageBrush;                                              // 0x1310(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OfflineBrush;                                              // 0x1384(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OnlineBrush;                                               // 0x13F8(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 AwayBrush;                                                 // 0x146C(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FriendsContainerBackground;                                // 0x14E0(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FriendsListBackground;                                     // 0x1554(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                       AddFriendEditableTextStyle;                                // 0x15C8(0x0698) (Edit, NativeAccessSpecifierPublic)
	struct FVector2D                                   UserPresenceImageSize;                                     // 0x1C60(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackBrush;                                                 // 0x1C68(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SelectedOptionBrush;                                       // 0x1CDC(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SettingsBrush;                                             // 0x1D50(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SeperatorBrush;                                            // 0x1DC4(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FontSizeBrush;                                             // 0x1E38(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SearchBrush;                                               // 0x1EAC(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     BackButtonMargin;                                          // 0x1F20(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     HeaderButtonMargin;                                        // 0x1F30(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     FriendsListMargin;                                         // 0x1F40(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     BackButtonContentMargin;                                   // 0x1F50(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     FriendsListNoFriendsMargin;                                // 0x1F60(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     FriendsListHeaderMargin;                                   // 0x1F70(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     FriendsListHeaderCountMargin;                              // 0x1F80(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     HeaderButtonContentMargin;                                 // 0x1F90(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     FriendItemMargin;                                          // 0x1FA0(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     FriendItemStatusMargin;                                    // 0x1FB0(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     FriendItemPresenceMargin;                                  // 0x1FC0(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ConfirmationBorderMargin;                                  // 0x1FD0(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ConfirmationButtonMargin;                                  // 0x1FE0(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ConfirmationButtonContentMargin;                           // 0x1FF0(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     SubMenuBackIconMargin;                                     // 0x2000(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     SubMenuPageIconMargin;                                     // 0x2010(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     RadioSettingTitleMargin;                                   // 0x2020(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     SubMenuSearchIconMargin;                                   // 0x2030(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     SubMenuSearchTextMargin;                                   // 0x2040(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     SubMenuBackButtonMargin;                                   // 0x2050(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     SubMenuSettingButtonMargin;                                // 0x2060(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     SubMenuListMargin;                                         // 0x2070(0x0010) (Edit, NativeAccessSpecifierPublic)
	float                                              SubMenuSeperatorThickness;                                 // 0x2080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ClanDetailsBrush;                                          // 0x2084(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ClanMembersBrush;                                          // 0x20F8(0x0074) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FriendsAndChat.FriendsComboStyle
// 0x0DAC (0x0DB0 - 0x0004)
struct FFriendsComboStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ComboItemButtonStyle;                                      // 0x0004(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                                ComboItemTextColorNormal;                                  // 0x0230(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ComboItemTextColorInverted;                                // 0x0240(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             ComboItemTextStyle;                                        // 0x0250(0x0100) (Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             FriendsComboTextStyle;                                     // 0x0350(0x0100) (Edit, NativeAccessSpecifierPublic)
	struct FVector2D                                   StatusButtonSize;                                          // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ActionComboButtonSize;                                     // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FComboButtonStyle                           ActionComboButtonStyle;                                    // 0x0460(0x0328) (Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             ActionComboButtonTextStyle;                                // 0x0788(0x0100) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ComboMenuPadding;                                          // 0x0888(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ComboItemPadding;                                          // 0x0898(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ComboItemContentPadding;                                   // 0x08A8(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FriendComboBackgroundLeftBrush;                            // 0x08B8(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FriendComboBackgroundRightBrush;                           // 0x092C(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FriendComboBackgroundLeftFlippedBrush;                     // 0x09A0(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FriendComboBackgroundRightFlippedBrush;                    // 0x0A14(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FComboButtonStyle                           FriendListComboButtonStyle;                                // 0x0A88(0x0328) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FriendsAndChat.FriendsChatStyle
// 0x1260 (0x1264 - 0x0004)
struct FFriendsChatStyle : public FSlateWidgetStyle
{
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0004(0x0100) (Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TimeStampTextStyle;                                        // 0x0104(0x0100) (Edit, NativeAccessSpecifierPublic)
	float                                              TimeStampOpacity;                                          // 0x0204(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DefaultChatColor;                                          // 0x0208(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                WhisperChatColor;                                          // 0x0218(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                GlobalChatColor;                                           // 0x0228(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                GameChatColor;                                             // 0x0238(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                PartyChatColor;                                            // 0x0248(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                AdminChatColor;                                            // 0x0258(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                WhisperHyperlinkChatColor;                                 // 0x0268(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                GlobalHyperlinkChatColor;                                  // 0x0278(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                GameHyperlinkChatColor;                                    // 0x0288(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                PartyHyperlinkChatColor;                                   // 0x0298(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                       ChatEntryTextStyle;                                        // 0x02A8(0x0698) (Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                       ChatDisplayTextStyle;                                      // 0x0940(0x0698) (Edit, NativeAccessSpecifierPublic)
	struct FScrollBoxStyle                             ScrollBorderStyle;                                         // 0x0FD8(0x01D4) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MessageNotificationBrush;                                  // 0x11AC(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ChatEntryPadding;                                          // 0x1220(0x0010) (Edit, NativeAccessSpecifierPublic)
	float                                              ChatEntryHeight;                                           // 0x1230(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     FriendActionPadding;                                       // 0x1234(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     FriendActionHeaderPadding;                                 // 0x1244(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     FriendActionStatusMargin;                                  // 0x1254(0x0010) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FriendsAndChat.FriendsChatChromeStyle
// 0x02E8 (0x02EC - 0x0004)
struct FFriendsChatChromeStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 ChatBackgroundBrush;                                       // 0x0004(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ChatEntryBackgroundBrush;                                  // 0x0078(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ChannelBackgroundBrush;                                    // 0x00EC(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                                ChatEntryBackgroundColor;                                  // 0x0160(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 TabBackgroundBrush;                                        // 0x0170(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                                NoneActiveTabColor;                                        // 0x01E4(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                TabFontColor;                                              // 0x01F4(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                TabFontColorInverted;                                      // 0x0204(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TabWidth;                                                  // 0x0214(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     TabPadding;                                                // 0x0218(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ChatWindowPadding;                                         // 0x0228(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ChatWindowToEntryMargin;                                   // 0x0238(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ChatChannelPadding;                                        // 0x0248(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ChatEntryPadding;                                          // 0x0258(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                                ChatBackgroundColor;                                       // 0x0268(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ChatMenuBackgroundBrush;                                   // 0x0278(0x0074) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FriendsAndChat.FriendsMarkupStyle
// 0x048C (0x0490 - 0x0004)
struct FFriendsMarkupStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MarkupButtonStyle;                                         // 0x0004(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             MarkupTextStyle;                                           // 0x0230(0x0100) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MarkupBackground;                                          // 0x0330(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ButtonColor;                                               // 0x03A4(0x001C) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ButtonHoverColor;                                          // 0x03C0(0x001C) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 TipColor;                                                  // 0x03DC(0x001C) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SeperatorBrush;                                            // 0x03F8(0x0074) (Edit, NativeAccessSpecifierPublic)
	float                                              SeperatorThickness;                                        // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     MarkupPadding;                                             // 0x0470(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ButtonPadding;                                             // 0x0480(0x0010) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct FriendsAndChat.FriendsAndChatStyle
// 0x4E6C (0x4E70 - 0x0004)
struct FFriendsAndChatStyle : public FSlateWidgetStyle
{
	struct FScrollBarStyle                             ScrollBarStyle;                                            // 0x0004(0x0418) (Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                                ActionButtonStyle;                                         // 0x041C(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FFriendsFontStyle                           FriendsSmallFontStyle;                                     // 0x0648(0x0124) (Edit, NativeAccessSpecifierPublic)
	struct FFriendsFontStyle                           FriendsNormalFontStyle;                                    // 0x076C(0x0124) (Edit, NativeAccessSpecifierPublic)
	struct FFriendsFontStyle                           FriendsLargeFontStyle;                                     // 0x0890(0x0124) (Edit, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                              CheckBoxStyle;                                             // 0x09B4(0x04B8) (Edit, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                              RadioBoxStyle;                                             // 0x0E6C(0x04B8) (Edit, NativeAccessSpecifierPublic)
	struct FFriendsListStyle                           FriendsListStyle;                                          // 0x1324(0x216C) (Edit, NativeAccessSpecifierPublic)
	struct FFriendsChatStyle                           FriendsChatStyle;                                          // 0x3490(0x1264) (Edit, NativeAccessSpecifierPublic)
	struct FFriendsChatChromeStyle                     FriendsChatChromeStyle;                                    // 0x46F4(0x02EC) (Edit, NativeAccessSpecifierPublic)
	struct FFriendsMarkupStyle                         FriendsMarkupStyle;                                        // 0x49E0(0x0490) (Edit, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
