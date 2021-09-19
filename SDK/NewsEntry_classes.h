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

// WidgetBlueprintGeneratedClass NewsEntry.NewsEntry_C
// 0x0020 (FullSize[0x0264] - InheritedSize[0x0244])
class UNewsEntry_C : public UFortUserWidget
{
public:
	class UTextBlock*                                  Content_Text;                                              // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Header_Text;                                               // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FText                                       HeaderText;                                                // 0x024C(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       BodyText;                                                  // 0x0258(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NewsEntry.NewsEntry_C");
		return ptr;
	}



	struct FText Get_Header_Text();
	struct FText Get_Content_Text();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
