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

// Class EditorStyle.EditorStyleSettings
// 0x0068 (FullSize[0x0084] - InheritedSize[0x001C])
class UEditorStyleSettings : public UObject
{
public:
	struct FLinearColor                                SelectionColor;                                            // 0x001C(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                PressedSelectionColor;                                     // 0x002C(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                InactiveSelectionColor;                                    // 0x003C(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                KeyboardFocusColor;                                        // 0x004C(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TEnumAsByte<EditorStyle_EColorVisionDeficiency>    ColorVisionDeficiencyPreviewType;                          // 0x005C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMDD[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseSmallToolBarIcons : 1;                                 // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableWindowAnimations : 1;                               // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bShowFriendlyNames : 1;                                    // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bExpandConfigurationMenus : 1;                             // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bShowProjectMenus : 1;                                     // 0x0060(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bShowLaunchMenus : 1;                                      // 0x0060(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T7JD[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<CoreUObject_ELogTimes>                 LogTimestampMode;                                          // 0x0064(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPromoteOutputLogWarningsDuringPIE;                        // 0x0065(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOpenAssetEditorTabsInNewWindow;                           // 0x0066(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZGW[0x1D];                                    // 0x0067(0x001D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EditorStyle.EditorStyleSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
