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

// WidgetBlueprintGeneratedClass ItemStackCounter.ItemStackCounter_C
// 0x0421 (FullSize[0x0665] - InheritedSize[0x0244])
class UItemStackCounter_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     _Border__Base;                                             // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    _SizeBox_;                                                 // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Counter;                                            // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FFortMultiSizeBrush                         MultiSizeBase;                                             // 0x0254(0x02B8) (Edit, BlueprintVisible)
	struct FFortMultiSizeFont                          MultiSizeFont;                                             // 0x050C(0x00F0) (Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                        MultiSizeMargin;                                           // 0x05FC(0x0060) (Edit, BlueprintVisible)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FBHW[0x3];                                     // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Count;                                                     // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AlwaysVisible;                                             // 0x0664(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemStackCounter.ItemStackCounter_C");
		return ptr;
	}



	void Refresh_Visibility();
	void Set_Stack_Count(int Count);
	void Update(TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, int Count);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ItemStackCounter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
