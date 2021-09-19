// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BannerLibrary.BannerLibrary_C.UpdateMaterialWithBasicInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortSocialItemBasicData BasicInfo                      (Parm, OutParm, ReferenceParm)
// class UImage*                  ImageInfo                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBannerLibrary_C::STATIC_UpdateMaterialWithBasicInfo(struct FFortSocialItemBasicData* BasicInfo, class UImage* ImageInfo, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BannerLibrary.BannerLibrary_C.UpdateMaterialWithBasicInfo");

	UBannerLibrary_C_UpdateMaterialWithBasicInfo_Params params;
	params.ImageInfo = ImageInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BasicInfo != nullptr)
		*BasicInfo = params.BasicInfo;

}


// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterial
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseIconMask                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerState*        InstigatorPlayerState          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBannerLibrary_C::STATIC_UpdateBannerMeshMaterial(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, class AFortPlayerState* InstigatorPlayerState, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterial");

	UBannerLibrary_C_UpdateBannerMeshMaterial_Params params;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;
	params.UseIconMask = UseIconMask;
	params.InstigatorPlayerState = InstigatorPlayerState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BannerLibrary.BannerLibrary_C.UpdateMaterial
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Banner_material                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortHomeBaseInfo       Image_info                     (Parm)
// bool                           Is_Icon                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBannerLibrary_C::STATIC_UpdateMaterial(class UImage* Banner_material, const struct FFortHomeBaseInfo& Image_info, bool Is_Icon, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BannerLibrary.BannerLibrary_C.UpdateMaterial");

	UBannerLibrary_C_UpdateMaterial_Params params;
	params.Banner_material = Banner_material;
	params.Image_info = Image_info;
	params.Is_Icon = Is_Icon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
