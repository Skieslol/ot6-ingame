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

// Class CoreUObject.Object
// 0x001C
class UObject
{
public:
	static class TUObjectArray*                        GObjects;                                                  // 0x0000(0x0004)
	void*                                              VfTable;                                                   // 0x0000(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            Flags;                                                     // 0x0004(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                             // 0x0008(0x0004) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                     // 0x000C(0x0004) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                      // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                     // 0x0018(0x0004) NOT AUTO-GENERATED PROPERTY


	static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static T* FindObject()
	{
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static std::vector<T*> FindObjects(const std::string& name)
	{
		std::vector<T*> ret;
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	template<typename T>
	static std::vector<T*> FindObjects()
	{
		std::vector<T*> ret;
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		return GetVFunction<void(__thiscall*)(UObject*, class UFunction*, void*)>(this, 0x34)(this, function, parms);
	}

	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Object");
		return ptr;
	}



	void ExecuteUbergraph(int EntryPoint);
};

// Class CoreUObject.Interface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Interface");
		return ptr;
	}



};

// Class CoreUObject.GCObjectReferencer
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData_WEBS[0xC];                                     // 0x001C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return ptr;
	}



};

// Class CoreUObject.TextBuffer
// 0x001C (FullSize[0x0038] - InheritedSize[0x001C])
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData_L7VI[0x1C];                                    // 0x001C(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.TextBuffer");
		return ptr;
	}



};

// Class CoreUObject.Field
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UField : public UObject
{
public:
	class UField*                                      Next;                                                      // 0x001C(0x0004) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Field");
		return ptr;
	}



};

// Class CoreUObject.Struct
// 0x0038 (FullSize[0x0058] - InheritedSize[0x0020])
class UStruct : public UField
{
public:
	class UStruct*                                     SuperField;                                                // 0x0020(0x0004) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                  // 0x0024(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                              // 0x0028(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                              // 0x002C(0x0004) NOT AUTO-GENERATED PROPERTY
	TArray<uint8_t>                                    Script;                                                    // 0x0030(0x000C) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PropertyLink;                                              // 0x003C(0x0004) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   RefLink;                                                   // 0x0040(0x0004) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   DestructorLink;                                            // 0x0044(0x0004) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PostConstructLink;                                         // 0x0048(0x0004) NOT AUTO-GENERATED PROPERTY
	TArray<UObject*>                                   ScriptObjectReferences;                                    // 0x004C(0x000C) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Struct");
		return ptr;
	}



};

// Class CoreUObject.ScriptStruct
// 0x000C (FullSize[0x0064] - InheritedSize[0x0058])
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData_HALA[0xC];                                     // 0x0058(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return ptr;
	}



};

// Class CoreUObject.Package
// 0x00A0 (FullSize[0x00BC] - InheritedSize[0x001C])
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData_VIZQ[0xA0];                                    // 0x001C(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Package");
		return ptr;
	}



};

// Class CoreUObject.Class
// 0x012C (FullSize[0x0184] - InheritedSize[0x0058])
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData_4Q63[0x12C];                                   // 0x0058(0x012C) MISSED OFFSET (PADDING)


template<typename T>
	inline T* __thiscall CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* __thiscall CreateDefaultObject()
	{
		return GetVFunction<UObject*(__thiscall*)(UClass*)>(this, 0x53)(this);
	}

	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Class");
		return ptr;
	}



};

// Class CoreUObject.Function
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                             // 0x0058(0x0004) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RepOffset;                                                 // 0x005C(0x0002) NOT AUTO-GENERATED PROPERTY
	int8_t                                             NumParms;                                                  // 0x005E(0x0001) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_UXVJ7EEJ6Y[0x01];                                      // 0x005F(0x0001) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ParmsSize;                                                 // 0x0060(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ReturnValueOffset;                                         // 0x0062(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RPCId;                                                     // 0x0064(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RPCResponseId;                                             // 0x0066(0x0002) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                       // 0x0068(0x0004) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                        // 0x006C(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                      // 0x0070(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_R5X2E5S14O[0x04];                                      // 0x0074(0x0004) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                      // 0x0078(0x0004) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Function");
		return ptr;
	}



};

// Class CoreUObject.DelegateFunction
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UDelegateFunction : public UFunction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.DelegateFunction");
		return ptr;
	}



};

// Class CoreUObject.DynamicClass
// 0x004C (FullSize[0x01D0] - InheritedSize[0x0184])
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData_N17U[0x4C];                                    // 0x0184(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.DynamicClass");
		return ptr;
	}



};

// Class CoreUObject.PackageMap
// 0x001C (FullSize[0x0038] - InheritedSize[0x001C])
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData_Z9QN[0x1C];                                    // 0x001C(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.PackageMap");
		return ptr;
	}



};

// Class CoreUObject.Enum
// 0x001C (FullSize[0x003C] - InheritedSize[0x0020])
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData_PI3C[0x1C];                                    // 0x0020(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Enum");
		return ptr;
	}



};

// Class CoreUObject.LinkerPlaceholderClass
// 0x00FC (FullSize[0x0280] - InheritedSize[0x0184])
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData_HGS8[0xFC];                                    // 0x0184(0x00FC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderClass");
		return ptr;
	}



};

// Class CoreUObject.LinkerPlaceholderExportObject
// 0x0048 (FullSize[0x0064] - InheritedSize[0x001C])
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData_9LRZ[0x48];                                    // 0x001C(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderExportObject");
		return ptr;
	}



};

// Class CoreUObject.LinkerPlaceholderFunction
// 0x00FC (FullSize[0x0174] - InheritedSize[0x0078])
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData_R1GZ[0xFC];                                    // 0x0078(0x00FC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderFunction");
		return ptr;
	}



};

// Class CoreUObject.MetaData
// 0x003C (FullSize[0x0058] - InheritedSize[0x001C])
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData_YRVP[0x3C];                                    // 0x001C(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.MetaData");
		return ptr;
	}



};

// Class CoreUObject.ObjectRedirector
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData_8QHC[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return ptr;
	}



};

// Class CoreUObject.Property
// 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
class UProperty : public UField
{
public:
	__int32 arrayDimension; // not auto generated, i made this (that's why it's probably wrong)
	__int32 elementSize;
	__int64 flags;
	__int8 pad[0xC];
	__int32 offset;
	__int8 pad1[0x10];                                    // 0x0020(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Property");
		return ptr;
	}



};

// Class CoreUObject.NumericProperty
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNumericProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
		return ptr;
	}



};

// Class CoreUObject.ArrayProperty
// 0x0004 (FullSize[0x0054] - InheritedSize[0x0050])
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_HQ3L[0x4];                                     // 0x0050(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return ptr;
	}



};

// Class CoreUObject.ObjectPropertyBase
// 0x0004 (FullSize[0x0054] - InheritedSize[0x0050])
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData_QI38[0x4];                                     // 0x0050(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return ptr;
	}



};

// Class CoreUObject.AssetObjectProperty
// 0x0000 (FullSize[0x0054] - InheritedSize[0x0054])
class UAssetObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.AssetObjectProperty");
		return ptr;
	}



};

// Class CoreUObject.AssetClassProperty
// 0x0004 (FullSize[0x0058] - InheritedSize[0x0054])
class UAssetClassProperty : public UAssetObjectProperty
{
public:
	unsigned char                                      UnknownData_GI3O[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.AssetClassProperty");
		return ptr;
	}



};

// Class CoreUObject.BoolProperty
// 0x0004 (FullSize[0x0054] - InheritedSize[0x0050])
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_Z1RS[0x4];                                     // 0x0050(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
		return ptr;
	}



};

// Class CoreUObject.ByteProperty
// 0x0004 (FullSize[0x0054] - InheritedSize[0x0050])
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData_8HMV[0x4];                                     // 0x0050(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
		return ptr;
	}



};

// Class CoreUObject.ObjectProperty
// 0x0000 (FullSize[0x0054] - InheritedSize[0x0054])
class UObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return ptr;
	}



};

// Class CoreUObject.ClassProperty
// 0x0004 (FullSize[0x0058] - InheritedSize[0x0054])
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData_UI6I[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
		return ptr;
	}



};

// Class CoreUObject.DelegateProperty
// 0x0004 (FullSize[0x0054] - InheritedSize[0x0050])
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_OAO8[0x4];                                     // 0x0050(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return ptr;
	}



};

// Class CoreUObject.DoubleProperty
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDoubleProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return ptr;
	}



};

// Class CoreUObject.FloatProperty
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UFloatProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
		return ptr;
	}



};

// Class CoreUObject.IntProperty
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UIntProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.IntProperty");
		return ptr;
	}



};

// Class CoreUObject.Int16Property
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Int16Property");
		return ptr;
	}



};

// Class CoreUObject.Int64Property
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Int64Property");
		return ptr;
	}



};

// Class CoreUObject.Int8Property
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UInt8Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Int8Property");
		return ptr;
	}



};

// Class CoreUObject.InterfaceProperty
// 0x0004 (FullSize[0x0054] - InheritedSize[0x0050])
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_A03Y[0x4];                                     // 0x0050(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return ptr;
	}



};

// Class CoreUObject.LazyObjectProperty
// 0x0000 (FullSize[0x0054] - InheritedSize[0x0054])
class ULazyObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return ptr;
	}



};

// Class CoreUObject.MapProperty
// 0x002C (FullSize[0x007C] - InheritedSize[0x0050])
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_NY1S[0x2C];                                    // 0x0050(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.MapProperty");
		return ptr;
	}



};

// Class CoreUObject.MulticastDelegateProperty
// 0x0004 (FullSize[0x0054] - InheritedSize[0x0050])
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_SGIJ[0x4];                                     // 0x0050(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return ptr;
	}



};

// Class CoreUObject.NameProperty
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNameProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.NameProperty");
		return ptr;
	}



};

// Class CoreUObject.StrProperty
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UStrProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.StrProperty");
		return ptr;
	}



};

// Class CoreUObject.StructProperty
// 0x0004 (FullSize[0x0054] - InheritedSize[0x0050])
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_8HSP[0x4];                                     // 0x0050(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.StructProperty");
		return ptr;
	}



};

// Class CoreUObject.UInt16Property
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UUInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
		return ptr;
	}



};

// Class CoreUObject.UInt32Property
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UUInt32Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
		return ptr;
	}



};

// Class CoreUObject.UInt64Property
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UUInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
		return ptr;
	}



};

// Class CoreUObject.WeakObjectProperty
// 0x0000 (FullSize[0x0054] - InheritedSize[0x0054])
class UWeakObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return ptr;
	}



};

// Class CoreUObject.TextProperty
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UTextProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.TextProperty");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
