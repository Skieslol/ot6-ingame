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

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// 0x002C
struct FStructSerializerNumericTestStruct
{
	int8_t                                             Int8;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_99WJ[0x1];                                     // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int16_t                                            Int16;                                                     // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Int32;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            Int64;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UInt8;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T36T[0x1];                                     // 0x0011(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           UInt16;                                                    // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           UInt32;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           UInt64;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Float;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             Double;                                                    // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// 0x0008
struct FStructSerializerBooleanTestStruct
{
	bool                                               BoolFalse;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               BoolTrue;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HM6M[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           Bitfield;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// 0x0008
struct FStructSerializerObjectTestStruct
{
	class UClass*                                      Class;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ObjectPtr;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Serialization.StructSerializerMapTestStruct
// 0x0078
struct FStructSerializerMapTestStruct
{
	TMap<int, struct FString>                          IntToStr;                                                  // 0x0000(0x0050) ELEMENT_SIZE_MISMATCH (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FVector>               StrToVec;                                                  // 0x003C(0x0050) ELEMENT_SIZE_MISMATCH (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// 0x0034
struct FStructSerializerArrayTestStruct
{
	TArray<int>                                        Int32Array;                                                // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StaticSingleElement;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaticInt32Array[0x3];                                     // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaticFloatArray[0x3];                                     // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             VectorArray;                                               // 0x0028(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// 0x0048
struct FStructSerializerBuiltinTestStruct
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // 0x0018(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotator;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       TEXT;                                                      // 0x0030(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	struct FVector                                     Vector;                                                    // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Serialization.StructSerializerTestStruct
// 0x0130
struct FStructSerializerTestStruct
{
	struct FStructSerializerNumericTestStruct          Numerics;                                                  // 0x0000(0x002C) (NativeAccessSpecifierPublic)
	struct FStructSerializerBooleanTestStruct          Booleans;                                                  // 0x002C(0x0008) (NativeAccessSpecifierPublic)
	struct FStructSerializerObjectTestStruct           Objects;                                                   // 0x0034(0x0008) (NativeAccessSpecifierPublic)
	struct FStructSerializerBuiltinTestStruct          Builtins;                                                  // 0x003C(0x0048) (NativeAccessSpecifierPublic)
	struct FStructSerializerArrayTestStruct            Arrays;                                                    // 0x0084(0x0034) (NativeAccessSpecifierPublic)
	struct FStructSerializerMapTestStruct              Maps;                                                      // 0x00B8(0x0078) (NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
