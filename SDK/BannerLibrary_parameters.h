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

// Function BannerLibrary.BannerLibrary_C.UpdateMaterialWithBasicInfo
struct UBannerLibrary_C_UpdateMaterialWithBasicInfo_Params
{
	struct FFortSocialItemBasicData                    BasicInfo;                                                 // (Parm, OutParm, ReferenceParm)
	class UImage*                                      ImageInfo;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterial
struct UBannerLibrary_C_UpdateBannerMeshMaterial_Params
{
	class UMaterialInstanceDynamic*                    Material_Instance_Dynamic;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseIconMask;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerState*                            InstigatorPlayerState;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BannerLibrary.BannerLibrary_C.UpdateMaterial
struct UBannerLibrary_C_UpdateMaterial_Params
{
	class UImage*                                      Banner_material;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortHomeBaseInfo                           Image_info;                                                // (Parm)
	bool                                               Is_Icon;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
