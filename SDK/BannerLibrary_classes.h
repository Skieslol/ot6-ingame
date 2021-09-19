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

// BlueprintGeneratedClass BannerLibrary.BannerLibrary_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UBannerLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BannerLibrary.BannerLibrary_C");
		return ptr;
	}



	void STATIC_UpdateMaterialWithBasicInfo(struct FFortSocialItemBasicData* BasicInfo, class UImage* ImageInfo, class UObject* __WorldContext);
	void STATIC_UpdateBannerMeshMaterial(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, class AFortPlayerState* InstigatorPlayerState, class UObject* __WorldContext);
	void STATIC_UpdateMaterial(class UImage* Banner_material, const struct FFortHomeBaseInfo& Image_info, bool Is_Icon, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
