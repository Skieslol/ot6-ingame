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

// Class Qos.QosBeaconClient
// 0x0028 (FullSize[0x029C] - InheritedSize[0x0274])
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_I0X6[0x28];                                    // 0x0274(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Qos.QosBeaconClient");
		return ptr;
	}



	void ServerQosRequest(const struct FString& InSessionId);
	void ClientQosResponse(TEnumAsByte<Qos_EQosResponseType> Response);
};

// Class Qos.QosBeaconHost
// 0x000C (FullSize[0x0268] - InheritedSize[0x025C])
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData_9VUH[0xC];                                     // 0x025C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Qos.QosBeaconHost");
		return ptr;
	}



};

// Class Qos.QosEvaluator
// 0x005C (FullSize[0x0078] - InheritedSize[0x001C])
class UQosEvaluator : public UObject
{
public:
	struct FQosSearchState                             SearchState;                                               // 0x001C(0x0014) (NativeAccessSpecifierPrivate)
	struct FQosSearchPass                              CurrentSearchPass;                                         // 0x0030(0x0010) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BQ18[0x18];                                    // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AQosBeaconClient*                            QosBeaconClient;                                           // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4NDJ[0x1C];                                    // 0x005C(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Qos.QosEvaluator");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
