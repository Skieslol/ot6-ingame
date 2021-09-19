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

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// 0x0010 (FullSize[0x002C] - InheritedSize[0x001C])
class UShaderPlatformQualitySettings : public UObject
{
public:
	struct FMaterialQualityOverrides                   QualityOverrides[0x3];                                     // 0x001C(0x000F) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TDI7[0x1];                                     // 0x002B(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
		return ptr;
	}



};

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// 0x0040 (FullSize[0x005C] - InheritedSize[0x001C])
class UMaterialShaderQualitySettings : public UObject
{
public:
	TMap<struct FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                         // 0x001C(0x0050) ELEMENT_SIZE_MISMATCH (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BUUY[0x4];                                     // 0x0058(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
