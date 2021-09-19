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

// Class UMG.AsyncTaskDownloadImage
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}



	class UAsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& URL);
};

// Class UMG.DragDropOperation
// 0x0044 (FullSize[0x0060] - InheritedSize[0x001C])
class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                       // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Payload;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     DefaultDragVisual;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EDragPivot>                        Pivot;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_08UP[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Offset;                                                    // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDrop;                                                    // 0x003C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                           // 0x0048(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDragged;                                                 // 0x0054(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}



	void Drop(const struct FPointerEvent& PointerEvent);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};

// Class UMG.MovieScene2DTransformSection
// 0x0250 (FullSize[0x0280] - InheritedSize[0x0030])
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_8ATN[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  Translation[0x2];                                          // 0x0034(0x00A8) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Rotation;                                                  // 0x00DC(0x0054) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Scale[0x2];                                                // 0x0130(0x00A8) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Shear[0x2];                                                // 0x01D8(0x00A8) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}



};

// Class UMG.MovieScene2DTransformTrack
// 0x0000 (FullSize[0x003C] - InheritedSize[0x003C])
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}



};

// Class UMG.MovieSceneMarginSection
// 0x0154 (FullSize[0x0184] - InheritedSize[0x0030])
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_2EGQ[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  TopCurve;                                                  // 0x0034(0x0054) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  LeftCurve;                                                 // 0x0088(0x0054) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  RightCurve;                                                // 0x00DC(0x0054) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  BottomCurve;                                               // 0x0130(0x0054) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}



};

// Class UMG.MovieSceneMarginTrack
// 0x0000 (FullSize[0x003C] - InheritedSize[0x003C])
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}



};

// Class UMG.NamedSlotInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UNamedSlotInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}



};

// Class UMG.PropertyBinding
// 0x001C (FullSize[0x0038] - InheritedSize[0x001C])
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                              // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                        SourcePath;                                                // 0x0024(0x000C) (NativeAccessSpecifierPublic)
	struct FName                                       DestinationProperty;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}



};

// Class UMG.BoolBinding
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UBoolBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}



	bool GetValue();
};

// Class UMG.BrushBinding
// 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_FLOT[0x4];                                     // 0x0038(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}



	struct FSlateBrush GetValue();
};

// Class UMG.CheckedStateBinding
// 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_3HSB[0x4];                                     // 0x0038(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}



	TEnumAsByte<SlateCore_ECheckBoxState> GetValue();
};

// Class UMG.ColorBinding
// 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_8VAE[0x4];                                     // 0x0038(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}



	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};

// Class UMG.FloatBinding
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UFloatBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}



	float GetValue();
};

// Class UMG.Int32Binding
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UInt32Binding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}



	int GetValue();
};

// Class UMG.MouseCursorBinding
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UMouseCursorBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}



	TEnumAsByte<CoreUObject_EMouseCursor> GetValue();
};

// Class UMG.TextBinding
// 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_C0QU[0x4];                                     // 0x0038(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}



	struct FText GetTextValue();
	struct FString GetStringValue();
};

// Class UMG.VisibilityBinding
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UVisibilityBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}



	TEnumAsByte<UMG_ESlateVisibility> GetValue();
};

// Class UMG.WidgetBinding
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UWidgetBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}



	class UWidget* GetValue();
};

// Class UMG.RichTextBlockDecorator
// 0x0008 (FullSize[0x0024] - InheritedSize[0x001C])
class URichTextBlockDecorator : public UObject
{
public:
	bool                                               bReveal;                                                   // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S29B[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RevealedIndex;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}



};

// Class UMG.SlateBlueprintLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}



	void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
	void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};

// Class UMG.SlateDataSheet
// 0x0404 (FullSize[0x0420] - InheritedSize[0x001C])
class USlateDataSheet : public UObject
{
public:
	class UTexture2D*                                  DataTexture;                                               // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ABK4[0x400];                                   // 0x0020(0x0400) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SlateDataSheet");
		return ptr;
	}



};

// Class UMG.SlateVectorArtData
// 0x002C (FullSize[0x0048] - InheritedSize[0x001C])
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                                // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint32_t>                                   IndexData;                                                 // 0x0028(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          Material;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   ExtentMin;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FVector2D                                   ExtentMax;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}



};

// Class UMG.UMGSequencePlayer
// 0x00A8 (FullSize[0x00C4] - InheritedSize[0x001C])
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_T0BS[0x10];                                    // 0x001C(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            Animation;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FA8N[0x94];                                    // 0x0030(0x0094) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}



};

// Class UMG.Visual
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UVisual : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}



};

// Class UMG.PanelSlot
// 0x0008 (FullSize[0x0024] - InheritedSize[0x001C])
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Content;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}



};

// Class UMG.BorderSlot
// 0x001C (FullSize[0x0040] - InheritedSize[0x0024])
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0024(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KB6K[0xA];                                     // 0x0036(0x000A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.ButtonSlot
// 0x001C (FullSize[0x0040] - InheritedSize[0x0024])
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0035(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1MAH[0xA];                                     // 0x0036(0x000A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.CanvasPanelSlot
// 0x0034 (FullSize[0x0058] - InheritedSize[0x0024])
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                                // 0x0024(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bAutoSize;                                                 // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XB3D[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ZOrder;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S7QW[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}



	void SetZOrder(int InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};

// Class UMG.GridSlot
// 0x0024 (FullSize[0x0048] - InheritedSize[0x0024])
class UGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C5PF[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Row;                                                       // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RowSpan;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ColumnSpan;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Nudge;                                                     // 0x003C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_89PF[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetLayer(int InLayer);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};

// Class UMG.HorizontalBoxSlot
// 0x0020 (FullSize[0x0044] - InheritedSize[0x0024])
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateChildSize                             Size;                                                      // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x003D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_77U7[0x6];                                     // 0x003E(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.OverlaySlot
// 0x0018 (FullSize[0x003C] - InheritedSize[0x0024])
class UOverlaySlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0035(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PRQF[0x6];                                     // 0x0036(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.SafeZoneSlot
// 0x0014 (FullSize[0x0038] - InheritedSize[0x0024])
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                              // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HAlign;                                                    // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VAlign;                                                    // 0x0026(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HMVA[0x1];                                     // 0x0027(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}



};

// Class UMG.ScaleBoxSlot
// 0x001C (FullSize[0x0040] - InheritedSize[0x0024])
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0035(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K62V[0xA];                                     // 0x0036(0x000A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.ScrollBoxSlot
// 0x0018 (FullSize[0x003C] - InheritedSize[0x0024])
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DXQK[0x7];                                     // 0x0035(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}



	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.SizeBoxSlot
// 0x001C (FullSize[0x0040] - InheritedSize[0x0024])
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0035(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8PCQ[0xA];                                     // 0x0036(0x000A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.UniformGridSlot
// 0x0010 (FullSize[0x0034] - InheritedSize[0x0024])
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HJ0Q[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Row;                                                       // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUPK[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};

// Class UMG.VerticalBoxSlot
// 0x0020 (FullSize[0x0044] - InheritedSize[0x0024])
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateChildSize                             Size;                                                      // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x003D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y3CA[0x6];                                     // 0x003E(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WidgetSwitcherSlot
// 0x0018 (FullSize[0x003C] - InheritedSize[0x0024])
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0035(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQNW[0x6];                                     // 0x0036(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WrapBoxSlot
// 0x0020 (FullSize[0x0044] - InheritedSize[0x0024])
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bFillEmptySpace;                                           // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OFMO[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FillSpanWhenLessThan;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x003D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6X15[0x6];                                     // 0x003E(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

// Class UMG.Widget
// 0x00B4 (FullSize[0x00D0] - InheritedSize[0x001C])
class UWidget : public UVisual
{
public:
	bool                                               bIsVariable;                                               // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCreatedByConstructionScript;                              // 0x001D(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JIWJ[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPanelSlot*                                  Slot;                                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5RNC[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             bIsEnabledDelegate;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       ToolTipText;                                               // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ToolTipTextDelegate;                                       // 0x0044(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class UWidget*                                     ToolTipWidget;                                             // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                     // 0x0058(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_ESlateVisibility>                  Visiblity;                                                 // 0x0068(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_ESlateVisibility>                  Visibility;                                                // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6C83[0x2];                                     // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             VisibilityDelegate;                                        // 0x006C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Cursor : 1;                                      // 0x007C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XF3X[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<CoreUObject_EMouseCursor>              Cursor;                                                    // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsVolatile;                                               // 0x0081(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TZDX[0x2];                                     // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWidgetTransform                            RenderTransform;                                           // 0x0084(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   RenderTransformPivot;                                      // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UWidgetNavigation*                           Navigation;                                                // 0x00A8(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A2ZQ[0x18];                                    // 0x00AC(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPropertyBinding*>                    NativeBindings;                                            // 0x00C4(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}



	void SetVisibility(TEnumAsByte<UMG_ESlateVisibility> InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderAngle(float Angle);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetCursor(TEnumAsByte<CoreUObject_EMouseCursor> InCursor);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	TEnumAsByte<UMG_ESlateVisibility> GetVisibility();
	struct FText GetText__DelegateSignature();
	TEnumAsByte<UMG_ESlateVisibility> GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	class UPanelWidget* GetParent();
	TEnumAsByte<CoreUObject_EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	TEnumAsByte<SlateCore_ECheckBoxState> GetCheckBoxState__DelegateSignature();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};

// Class UMG.CircularThrobber
// 0x008C (FullSize[0x015C] - InheritedSize[0x00D0])
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                            // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Period;                                                    // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            PieceImage;                                                // 0x00DC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Image;                                                     // 0x00E0(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8ZC[0x8];                                     // 0x0154(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}



	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};

// Class UMG.ComboBox
// 0x0024 (FullSize[0x00F4] - InheritedSize[0x00D0])
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                     // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x00DC(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FB7T[0x8];                                     // 0x00EC(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}



};

// Class UMG.ComboBoxString
// 0x03E0 (FullSize[0x04B0] - InheritedSize[0x00D0])
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                            // 0x00D0(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FString                                     SelectedOption;                                            // 0x00DC(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FComboBoxStyle                              WidgetStyle;                                               // 0x00E8(0x0364) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     ContentPadding;                                            // 0x044C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              MaxListHeight;                                             // 0x045C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasDownArrow;                                              // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_535M[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x0464(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0474(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOpening;                                                 // 0x0480(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XC60[0x24];                                    // 0x048C(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}



	void SetSelectedOption(const struct FString& Option);
	bool RemoveOption(const struct FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	struct FString GetSelectedOption();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int INDEX);
	int FindOptionIndex(const struct FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FString& Option);
};

// Class UMG.EditableText
// 0x0260 (FullSize[0x0330] - InheritedSize[0x00D0])
class UEditableText : public UWidget
{
public:
	struct FText                                       TEXT;                                                      // 0x00D0(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x00DC(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x00EC(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextStyle                          WidgetStyle;                                               // 0x0108(0x01A4) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x02AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImageSelected;                                   // 0x02B0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImageComposing;                                  // 0x02B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CaretImage;                                                // 0x02B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x02BC(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x02E4(0x001C) (Deprecated, NativeAccessSpecifierPublic)
	bool                                               IsReadOnly;                                                // 0x0300(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsPassword;                                                // 0x0301(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WOSP[0x2];                                     // 0x0302(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDesiredWidth;                                       // 0x0304(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCaretMovedWhenGainFocus;                                 // 0x0308(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                  // 0x0309(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                        // 0x030A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x030B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x030C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x030D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EVirtualKeyboardType>              KeyboardType;                                              // 0x030E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8DHH[0x1];                                     // 0x030F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0310(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x031C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U12P[0x8];                                     // 0x0328(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& TEXT, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& TEXT);
	struct FText GetText();
};

// Class UMG.EditableTextBox
// 0x076C (FullSize[0x083C] - InheritedSize[0x00D0])
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       TEXT;                                                      // 0x00D0(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x00DC(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                       WidgetStyle;                                               // 0x00EC(0x0698) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0784(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0788(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0794(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x07A4(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	struct FLinearColor                                ForegroundColor;                                           // 0x07CC(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x07DC(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReadOnlyForegroundColor;                                   // 0x07EC(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsReadOnly;                                                // 0x07FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsPassword;                                                // 0x07FD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8V2C[0x2];                                     // 0x07FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDesiredWidth;                                       // 0x0800(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0804(0x0010) (Deprecated, NativeAccessSpecifierPublic)
	bool                                               IsCaretMovedWhenGainFocus;                                 // 0x0814(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                  // 0x0815(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                        // 0x0816(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x0817(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x0818(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x0819(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EVirtualKeyboardType>              KeyboardType;                                              // 0x081A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OKZ7[0x1];                                     // 0x081B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x081C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0828(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZU0T[0x8];                                     // 0x0834(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& TEXT, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& TEXT);
	struct FText GetText();
	void ClearError();
};

// Class UMG.ExpandableArea
// 0x01C4 (FullSize[0x0294] - InheritedSize[0x00D0])
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData_NP5A[0x4];                                     // 0x00D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpandableAreaStyle                        Style;                                                     // 0x00D4(0x00EC) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BorderBrush;                                               // 0x01C0(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BorderColor;                                               // 0x0234(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsExpanded;                                               // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5FQM[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxHeight;                                                 // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     HeaderPadding;                                             // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                                     AreaPadding;                                               // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                        // 0x0278(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWidget*                                     HeaderContent;                                             // 0x0284(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     BodyContent;                                               // 0x0288(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_97RQ[0x8];                                     // 0x028C(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}



	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};

// Class UMG.Image
// 0x00C0 (FullSize[0x0190] - InheritedSize[0x00D0])
class UImage : public UWidget
{
public:
	class USlateBrushAsset*                            Image;                                                     // 0x00D0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Brush;                                                     // 0x00D4(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BrushDelegate;                                             // 0x0148(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x0168(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                    // 0x0178(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YTW[0x8];                                     // 0x0188(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}



	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.NativeWidgetHost
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData_OX2N[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}



};

// Class UMG.PanelWidget
// 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                     // 0x00D0(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EAOT[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}



	bool RemoveChildAt(int INDEX);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int INDEX);
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};

// Class UMG.CanvasPanel
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_WR54[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}



	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};

// Class UMG.ContentWidget
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UContentWidget : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}



	class UPanelSlot* GetContentSlot();
};

// Class UMG.Border
// 0x0128 (FullSize[0x0208] - InheritedSize[0x00E0])
class UBorder : public UContentWidget
{
public:
	struct FLinearColor                                ContentColorAndOpacity;                                    // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                            // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0111(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4QV1[0x2];                                     // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 Background;                                                // 0x0114(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BackgroundDelegate;                                        // 0x0188(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                BrushColor;                                                // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BrushColorDelegate;                                        // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bShowEffectWhenDisabled;                                   // 0x01B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FI9Q[0x3];                                     // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                    // 0x01BC(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                      // 0x01CC(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseMoveEvent;                                          // 0x01DC(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                   // 0x01EC(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TEVR[0x8];                                     // 0x01FC(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            Brush;                                                     // 0x0204(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.Button
// 0x0298 (FullSize[0x0378] - InheritedSize[0x00E0])
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x00E0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FButtonStyle                                WidgetStyle;                                               // 0x00E4(0x022C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0310(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x0320(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonClickMethod>          ClickMethod;                                               // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonTouchMethod>          TouchMethod;                                               // 0x0331(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x0332(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LHAQ[0x1];                                     // 0x0333(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0334(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPressed;                                                 // 0x0340(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReleased;                                                // 0x034C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0358(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnhovered;                                               // 0x0364(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C89K[0x8];                                     // 0x0370(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}



	void SetStyle(const struct FButtonStyle& InStyle);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};

// Class UMG.CheckBox
// 0x0538 (FullSize[0x0618] - InheritedSize[0x00E0])
class UCheckBox : public UContentWidget
{
public:
	TEnumAsByte<SlateCore_ECheckBoxState>              CheckedState;                                              // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MO0L[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CheckedStateDelegate;                                      // 0x00E4(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                              WidgetStyle;                                               // 0x00F4(0x04B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x05AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedImage;                                            // 0x05B0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                     // 0x05B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedPressedImage;                                     // 0x05B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedImage;                                              // 0x05BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedHoveredImage;                                       // 0x05C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedPressedImage;                                       // 0x05C4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedImage;                                         // 0x05C8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                  // 0x05CC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                  // 0x05D0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x05D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JEPZ[0x3];                                     // 0x05D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x05D8(0x0010) (Deprecated, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BorderBackgroundColor;                                     // 0x05E8(0x001C) (Deprecated, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                       // 0x0604(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4HHL[0x8];                                     // 0x0610(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}



	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(TEnumAsByte<SlateCore_ECheckBoxState> InCheckedState);
	bool IsPressed();
	bool IsChecked();
	TEnumAsByte<SlateCore_ECheckBoxState> GetCheckedState();
};

// Class UMG.InvalidationBox
// 0x000C (FullSize[0x00EC] - InheritedSize[0x00E0])
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               bCanCache;                                                 // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               CacheRelativeTransforms;                                   // 0x00E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T1NI[0xA];                                     // 0x00E2(0x000A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}



	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};

// Class UMG.MenuAnchor
// 0x002C (FullSize[0x010C] - InheritedSize[0x00E0])
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                 // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                     // 0x00E4(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EMenuPlacement>              Placement;                                                 // 0x00F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldDeferPaintingAfterWindowContent;                     // 0x00F5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y3G8[0x2];                                     // 0x00F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                         // 0x00F8(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJQV[0x8];                                     // 0x0104(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}



	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void Close();
};

// Class UMG.NamedSlot
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData_YISQ[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}



};

// Class UMG.RetainerBox
// 0x001C (FullSize[0x00FC] - InheritedSize[0x00E0])
class URetainerBox : public UContentWidget
{
public:
	int                                                Phase;                                                     // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PhaseCount;                                                // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          EffectMaterial;                                            // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       TextureParameter;                                          // 0x00EC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KG4U[0x8];                                     // 0x00F4(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}



	void SetTextureParameter(const struct FName& TextureParameter);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	class UMaterialInstanceDynamic* GetEffectMaterial();
};

// Class UMG.SafeZone
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class USafeZone : public UContentWidget
{
public:
	unsigned char                                      UnknownData_V2V5[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}



};

// Class UMG.ScaleBox
// 0x0014 (FullSize[0x00F4] - InheritedSize[0x00E0])
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<Slate_EStretchDirection>               StretchDirection;                                          // 0x00E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EStretch>                        Stretch;                                                   // 0x00E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GB1A[0x2];                                     // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UserSpecifiedScale;                                        // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreInheritedScale;                                      // 0x00E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SV8J[0xB];                                     // 0x00E9(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}



};

// Class UMG.SizeBox
// 0x0024 (FullSize[0x0104] - InheritedSize[0x00E0])
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      bOverride_WidthOverride : 1;                               // 0x00E0(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_HeightOverride : 1;                              // 0x00E0(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                             // 0x00E0(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                            // 0x00E0(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                             // 0x00E0(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                            // 0x00E0(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HBDA[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WidthOverride;                                             // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOverride;                                            // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredWidth;                                           // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredHeight;                                          // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredWidth;                                           // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredHeight;                                          // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0DE9[0x8];                                     // 0x00FC(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}



	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearHeightOverride();
};

// Class UMG.Viewport
// 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                           // 0x00E0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZ8S[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}



	class AActor* Spawn(class UClass* ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};

// Class UMG.GridPanel
// 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                                // 0x00E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      RowFill;                                                   // 0x00EC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8WM1[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}



	class UGridSlot* AddChildToGrid(class UWidget* Content);
};

// Class UMG.HorizontalBox
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_XUOX[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}



	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};

// Class UMG.Overlay
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_RS88[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}



	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};

// Class UMG.ScrollBox
// 0x0610 (FullSize[0x06F0] - InheritedSize[0x00E0])
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                               // 0x00E0(0x01D4) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                             WidgetBarStyle;                                            // 0x02B4(0x0418) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x06CC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      BarStyle;                                                  // 0x06D0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x06D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_ESlateVisibility>                  ScrollBarVisibility;                                       // 0x06D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EConsumeMouseWheel>          ConsumeMouseWheel;                                         // 0x06D6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E8Z8[0x1];                                     // 0x06D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ScrollbarThickness;                                        // 0x06D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AlwaysShowScrollbar;                                       // 0x06E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NH5E[0xF];                                     // 0x06E1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}



	void SetScrollOffset(float NewScrollOffset);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll);
	void ScrollToStart();
	void ScrollToEnd();
	float GetScrollOffset();
};

// Class UMG.UniformGridPanel
// 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                               // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              MinDesiredSlotWidth;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredSlotHeight;                                      // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R0NT[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}



	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
};

// Class UMG.VerticalBox
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_RXNP[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}



	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};

// Class UMG.WidgetSwitcher
// 0x000C (FullSize[0x00EC] - InheritedSize[0x00E0])
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                         // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ODM7[0x8];                                     // 0x00E4(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}



	void SetActiveWidgetIndex(int INDEX);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int INDEX);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
};

// Class UMG.WrapBox
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                          // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4GEL[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}



	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);
};

// Class UMG.ProgressBar
// 0x01B0 (FullSize[0x0280] - InheritedSize[0x00D0])
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                               // 0x00D0(0x0160) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0230(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImage;                                           // 0x0234(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            FillImage;                                                 // 0x0238(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            MarqueeImage;                                              // 0x023C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EProgressBarFillType>            BarFillType;                                               // 0x0244(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMarquee;                                                // 0x0245(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9YRF[0x2];                                     // 0x0246(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             PercentDelegate;                                           // 0x0248(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                FillColorAndOpacity;                                       // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                               // 0x0268(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PVEV[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}



	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};

// Class UMG.ScrollBar
// 0x0430 (FullSize[0x0500] - InheritedSize[0x00D0])
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                               // 0x00D0(0x0418) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x04E8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowScrollbar;                                      // 0x04EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x04ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MRND[0x2];                                     // 0x04EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Thickness;                                                 // 0x04F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQKU[0x8];                                     // 0x04F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}



	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// Class UMG.Slider
// 0x0258 (FullSize[0x0328] - InheritedSize[0x00D0])
class USlider : public UWidget
{
public:
	float                                              Value;                                                     // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x00D4(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSliderStyle                                WidgetStyle;                                               // 0x00E4(0x01D4) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L3O2[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SliderBarColor;                                            // 0x02BC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                         // 0x02CC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                              // 0x02DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // 0x02DD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_81U6[0x2];                                     // 0x02DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StepSize;                                                  // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                       // 0x02E4(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                         // 0x02F0(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                  // 0x02FC(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                    // 0x0308(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0314(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JX1K[0x8];                                     // 0x0320(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}



	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
};

// Class UMG.Spacer
// 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                      // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QE1N[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}



	void SetSize(const struct FVector2D& InSize);
};

// Class UMG.SpinBox
// 0x032C (FullSize[0x03FC] - InheritedSize[0x00D0])
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                     // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x00D4(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSpinBoxStyle                               WidgetStyle;                                               // 0x00E4(0x0274) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0358(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delta;                                                     // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliderExponent;                                            // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0364(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              MinDesiredWidth;                                           // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x0391(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q974[0x2];                                     // 0x0392(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0394(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x03B0(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                          // 0x03BC(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                     // 0x03C8(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                       // 0x03D4(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinValue : 1;                                    // 0x03E0(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MaxValue : 1;                                    // 0x03E0(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MinSliderValue : 1;                              // 0x03E0(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MaxSliderValue : 1;                              // 0x03E0(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BRW9[0x3];                                     // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinValue;                                                  // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxValue;                                                  // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinSliderValue;                                            // 0x03EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSliderValue;                                            // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YWUI[0x8];                                     // 0x03F4(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}



	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// Class UMG.TableViewBase
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UTableViewBase : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TableViewBase");
		return ptr;
	}



	class UWidget* OnGenerateRowUObject__DelegateSignature(class UObject* Item);
};

// Class UMG.ListView
// 0x002C (FullSize[0x00FC] - InheritedSize[0x00D0])
class UListView : public UTableViewBase
{
public:
	float                                              ItemHeight;                                                // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             Items;                                                     // 0x00D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ESelectionMode>                  SelectionMode;                                             // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G3ZT[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateRowEvent;                                        // 0x00E4(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0MXY[0x8];                                     // 0x00F4(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}



};

// Class UMG.TileView
// 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
class UTileView : public UTableViewBase
{
public:
	float                                              ItemWidth;                                                 // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ItemHeight;                                                // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             Items;                                                     // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ESelectionMode>                  SelectionMode;                                             // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T7M8[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateTileEvent;                                       // 0x00E8(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_40EP[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}



	void SetItemWidth(float Width);
	void SetItemHeight(float Height);
	void RequestListRefresh();
};

// Class UMG.TextLayoutWidget
// 0x0024 (FullSize[0x00F4] - InheritedSize[0x00D0])
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                         // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               AutoWrapText;                                              // 0x00D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OKZ3[0x2];                                     // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WrapTextAt;                                                // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     Margin;                                                    // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	float                                              LineHeightPercentage;                                      // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}



};

// Class UMG.MultiLineEditableText
// 0x0174 (FullSize[0x0268] - InheritedSize[0x00F4])
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       TEXT;                                                      // 0x00F4(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0100(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x010C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             WidgetStyle;                                               // 0x011C(0x0100) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x021C(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x0244(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_01K1[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0248(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0254(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0H9W[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& TEXT, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& TEXT);
	struct FText GetText();
};

// Class UMG.MultiLineEditableTextBox
// 0x0840 (FullSize[0x0934] - InheritedSize[0x00F4])
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       TEXT;                                                      // 0x00F4(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0100(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x010C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                       WidgetStyle;                                               // 0x011C(0x0698) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x07B4(0x0100) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x08B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3BNK[0x3];                                     // 0x08B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x08B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x08BC(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	struct FLinearColor                                ForegroundColor;                                           // 0x08E4(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x08F4(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReadOnlyForegroundColor;                                   // 0x0904(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0914(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0920(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8930[0x8];                                     // 0x092C(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& TEXT, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& TEXT);
	struct FText GetText();
};

// Class UMG.RichTextBlock
// 0x0168 (FullSize[0x025C] - InheritedSize[0x00F4])
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       TEXT;                                                      // 0x00F4(0x0018) ELEMENT_SIZE_MISMATCH (Edit, Protected, NativeAccessSpecifierProtected)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0100(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                              Font;                                                      // 0x0110(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                Color;                                                     // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class URichTextBlockDecorator*>             Decorators;                                                // 0x0148(0x000C) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ODFN[0x108];                                   // 0x0154(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}



};

// Class UMG.TextBlock
// 0x00A8 (FullSize[0x019C] - InheritedSize[0x00F4])
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       TEXT;                                                      // 0x00F4(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0100(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0110(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x012C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x013C(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x0164(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x016C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                             // 0x017C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinDesiredWidth;                                           // 0x018C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWrapWithInvalidationPanel;                                // 0x0190(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JVOC[0xB];                                     // 0x0191(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	struct FText GetText();
};

// Class UMG.Throbber
// 0x0088 (FullSize[0x0158] - InheritedSize[0x00D0])
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                            // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateHorizontally;                                      // 0x00D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAnimateVertically;                                        // 0x00D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAnimateOpacity;                                           // 0x00D6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2TYN[0x1];                                     // 0x00D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            PieceImage;                                                // 0x00D8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Image;                                                     // 0x00DC(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3JO[0x8];                                     // 0x0150(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}



	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// Class UMG.UserWidget
// 0x00E8 (FullSize[0x01B8] - InheritedSize[0x00D0])
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData_MM2M[0x4];                                     // 0x00D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x00D4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x00E4(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x00F4(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ForegroundColorDelegate;                                   // 0x0110(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bSupportsKeyboardFocus;                                    // 0x0130(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsFocusable;                                              // 0x0131(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJT7[0x2];                                     // 0x0132(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetTree*                                 WidgetTree;                                                // 0x0134(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                     // 0x0138(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                    // 0x0144(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                         // 0x0150(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bStopAction;                                               // 0x015C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z1X0[0x3];                                     // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Priority;                                                  // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I562[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputComponent*                             InputComponent;                                            // 0x0168(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AW71[0x4C];                                    // 0x016C(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType);
	void StopListeningForAllInputActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetPadding(const struct FMargin& InPadding);
	void SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void SetInputActionPriority(int NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void RemoveFromViewport();
	void PlaySound(class USoundBase* SoundToPlay);
	void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	struct FEventReply OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	struct FEventReply OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	struct FEventReply OnControllerAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* GetOwningPlayerPawn();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	bool GetIsVisible();
	void Destruct();
	void Construct();
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};

// Class UMG.WidgetTree
// 0x0010 (FullSize[0x002C] - InheritedSize[0x001C])
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWidget*>                             AllWidgets;                                                // 0x0020(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}



};

// Class UMG.WidgetAnimation
// 0x0120 (FullSize[0x013C] - InheritedSize[0x001C])
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	struct FScriptMulticastDelegate                    OnAnimationStarted;                                        // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAnimationFinished;                                       // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMovieScene*                                 MovieScene;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                         // 0x0038(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XAQM[0xF8];                                    // 0x0044(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}



	float GetStartTime();
	float GetEndTime();
};

// Class UMG.WidgetBlueprintGeneratedClass
// 0x002C (FullSize[0x01F8] - InheritedSize[0x01CC])
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                                // 0x01CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                  // 0x01D0(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UWidgetAnimation*>                    Animations;                                                // 0x01DC(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               NamedSlots;                                                // 0x01E8(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCanEverTick : 1;                                          // 0x01F4(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCanEverPaint : 1;                                         // 0x01F4(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TCRD[0x3];                                     // 0x01F5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}



};

// Class UMG.WidgetBlueprintLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}



	struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
	struct FEventReply STATIC_Unhandled();
	struct FEventReply STATIC_SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);
	struct FEventReply STATIC_SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition);
	void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void STATIC_SetInputMode_GameOnly(class APlayerController* Target);
	void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture);
	void STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);
	struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
	struct FEventReply STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
	struct FSlateBrush STATIC_NoResourceBrush();
	struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply STATIC_LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	bool STATIC_IsDragDropping();
	struct FEventReply STATIC_Handled();
	struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromControllerEvent(const struct FControllerEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
	class UDragDropOperation* STATIC_GetDragDroppingContent();
	class UTexture2D* STATIC_GetBrushResourceAsTexture2D(struct FSlateBrush* Brush);
	class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(struct FSlateBrush* Brush);
	class UObject* STATIC_GetBrushResource(struct FSlateBrush* Brush);
	void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class UUserWidget*>* FoundWidgets, bool TopLevelOnly);
	void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
	struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
	void STATIC_DrawTextFormatted(struct FPaintContext* Context, const struct FText& TEXT, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint);
	void STATIC_DrawText(struct FPaintContext* Context, const struct FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint);
	void STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias);
	void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias);
	void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
	void STATIC_DismissAllMenus();
	struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	struct FEventReply STATIC_DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
	class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	struct FEventReply STATIC_ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers);
	struct FEventReply STATIC_CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	struct FEventReply STATIC_CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
	void STATIC_CancelDragDrop();
};

// Class UMG.WidgetComponent
// 0x0094 (FullSize[0x04C0] - InheritedSize[0x042C])
class UWidgetComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_MA43[0x4];                                     // 0x042C(0x0004) Fix Super Size
	class UClass*                                      WidgetClass;                                               // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                                   DrawSize;                                                  // 0x0434(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                                   Pivot;                                                     // 0x043C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              MaxInteractionDistance;                                    // 0x0444(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULocalPlayer*                                OwnerPlayer;                                               // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BackgroundColor;                                           // 0x044C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<UMG_EWidgetBlendMode>                  BlendMode;                                                 // 0x045C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsOpaque;                                                 // 0x045D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsTwoSided;                                               // 0x045E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7PMV[0x1];                                     // 0x045F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ParabolaDistortion;                                        // 0x0460(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               TickWhenOffscreen;                                         // 0x0464(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HY18[0x3];                                     // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 Widget;                                                    // 0x0468(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                                  BodySetup;                                                 // 0x046C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          TranslucentMaterial;                                       // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                              // 0x0474(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OpaqueMaterial;                                            // 0x0478(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                   // 0x047C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          MaskedMaterial;                                            // 0x0480(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                   // 0x0484(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                      RenderTarget;                                              // 0x0488(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x048C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseLegacyRotation;                                        // 0x0490(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bAddedToScreen;                                            // 0x0491(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SJPX[0x2E];                                    // 0x0492(0x002E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}



	void SetWidget(class UUserWidget* Widget);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetMaxInteractionDistance(float Distance);
	void SetDrawSize(const struct FVector2D& Size);
	class UUserWidget* GetUserWidgetObject();
	class ULocalPlayer* GetOwnerPlayer();
	float GetMaxInteractionDistance();
	struct FVector2D GetDrawSize();
};

// Class UMG.WidgetLayoutLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}



	class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
	class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
	class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
	void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
	bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
	float STATIC_GetViewportScale(class UObject* WorldContextObject);
	bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
};

// Class UMG.WidgetNavigation
// 0x0078 (FullSize[0x0094] - InheritedSize[0x001C])
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                        // 0x001C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Down;                                                      // 0x0030(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Left;                                                      // 0x0044(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Right;                                                     // 0x0058(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Next;                                                      // 0x006C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Previous;                                                  // 0x0080(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
