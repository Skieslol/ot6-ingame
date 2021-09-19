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

// Class PurchaseFlow.PurchaseFlowJSBridge
// 0x0008 (FullSize[0x0024] - InheritedSize[0x001C])
class UPurchaseFlowJSBridge : public UObject
{
public:
	unsigned char                                      UnknownData_D9YP[0x8];                                     // 0x001C(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PurchaseFlow.PurchaseFlowJSBridge");
		return ptr;
	}



	void RequestClose(const struct FString& CloseInfo);
	void Receipt(const struct FPurchaseFlowReceiptParam& Receipt);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
