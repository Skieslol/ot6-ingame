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

// Enum Qos.EQosResponseType
enum class Qos_EQosResponseType : uint8_t
{
	EQosResponseType__NoResponse   = 0,
	EQosResponseType__Success      = 1,
	EQosResponseType__Failure      = 2,
	EQosResponseType__EQosResponseType_MAX = 3,

};

// Enum Qos.EQosCompletionResult
enum class Qos_EQosCompletionResult : uint8_t
{
	EQosCompletionResult__Invalid  = 0,
	EQosCompletionResult__Success  = 1,
	EQosCompletionResult__Cached   = 2,
	EQosCompletionResult__Failure  = 3,
	EQosCompletionResult__Canceled = 4,
	EQosCompletionResult__EQosCompletionResult_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Qos.QosSearchState
// 0x0014
struct FQosSearchState
{
	struct FString                                     DatacenterId;                                              // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             LastDatacenterIdTimestamp;                                 // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Qos.QosSearchPass
// 0x0010
struct FQosSearchPass
{
	int                                                CurrentSessionIdx;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X9QO[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
