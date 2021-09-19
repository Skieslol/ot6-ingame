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

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EngineSettings_EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop = 0,
	EThreePlayerSplitScreenType__FavorBottom = 1,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX = 2,

};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class EngineSettings_ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal = 0,
	ETwoPlayerSplitScreenType__Vertical = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0018
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Desc;                                                      // 0x000C(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
