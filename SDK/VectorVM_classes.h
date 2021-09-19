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

// Class VectorVM.NiagaraDataObject
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UNiagaraDataObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VectorVM.NiagaraDataObject");
		return ptr;
	}



};

// Class VectorVM.NiagaraCurveDataObject
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UNiagaraCurveDataObject : public UNiagaraDataObject
{
public:
	class UCurveVector*                                CurveObj;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VectorVM.NiagaraCurveDataObject");
		return ptr;
	}



};

// Class VectorVM.NiagaraSparseVolumeDataObject
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UNiagaraSparseVolumeDataObject : public UNiagaraDataObject
{
public:
	unsigned char                                      UnknownData_GNXV[0x18];                                    // 0x001C(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VectorVM.NiagaraSparseVolumeDataObject");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
