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

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0005
struct FMaterialQualityOverrides
{
	bool                                               bEnableOverride;                                           // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bForceFullyRough;                                          // 0x0001(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bForceNonMetal;                                            // 0x0002(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bForceDisableLMDirectionality;                             // 0x0003(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bForceLQReflections;                                       // 0x0004(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MaterialShaderQualitySettings.ShaderQualityOverridesListItem
// 0x0014
struct FShaderQualityOverridesListItem
{
	struct FString                                     RangeName;                                                 // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoolProperty*                               QualityProperty;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UShaderPlatformQualitySettings*              SettingContainer;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
