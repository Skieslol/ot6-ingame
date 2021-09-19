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

// ScriptStruct WebBrowser.WebJSCallbackBase
// 0x0018
struct FWebJSCallbackBase
{
	unsigned char                                      UnknownData_OQ9J[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct WebBrowser.WebJSResponse
// 0x0000 (0x0018 - 0x0018)
struct FWebJSResponse : public FWebJSCallbackBase
{

};

// ScriptStruct WebBrowser.WebJSFunction
// 0x0000 (0x0018 - 0x0018)
struct FWebJSFunction : public FWebJSCallbackBase
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
