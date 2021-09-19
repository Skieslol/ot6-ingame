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

// WidgetBlueprintGeneratedClass MovieWidget.MovieWidget_C
// 0x000C (FullSize[0x0254] - InheritedSize[0x0248])
class UMovieWidget_C : public UFortMovieWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Video_Border;                                              // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    Video_SizeBox;                                             // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MovieWidget.MovieWidget_C");
		return ptr;
	}



	void StopPlaying();
	void Init(class UMediaTexture* inMediaTexture);
	void Destruct();
	void ExecuteUbergraph_MovieWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
