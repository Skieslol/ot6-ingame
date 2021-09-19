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
// Parameters
//---------------------------------------------------------------------------

// Function Qos.QosBeaconClient.ServerQosRequest
struct AQosBeaconClient_ServerQosRequest_Params
{
	struct FString                                     InSessionId;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Qos.QosBeaconClient.ClientQosResponse
struct AQosBeaconClient_ClientQosResponse_Params
{
	TEnumAsByte<Qos_EQosResponseType>                  Response;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
