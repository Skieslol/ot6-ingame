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

// Class SlateCore.FontBulkData
// 0x0064 (FullSize[0x0080] - InheritedSize[0x001C])
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData_QYJS[0x64];                                    // 0x001C(0x0064) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}



};

// Class SlateCore.FontProviderInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UFontProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}



};

// Class SlateCore.SlateTypes
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class USlateTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}



};

// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class USlateWidgetStyleContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return ptr;
	}



};

// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData_6NFW[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return ptr;
	}



};

// Class SlateCore.SlateWidgetStyleAsset
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                               // 0x001C(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
