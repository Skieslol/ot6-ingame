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

// BlueprintGeneratedClass BannerGATooltip.BannerGATooltip_C
// 0x0000 (FullSize[0x007C] - InheritedSize[0x007C])
class UBannerGATooltip_C : public UFortGameplayAbilityTooltip
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BannerGATooltip.BannerGATooltip_C");
		return ptr;
	}



	bool GetTextForTokenFromAbilitySpecInternal(const struct FGameplayAbilitySpec& Spec, const struct FGameplayTag& Tag, class UFortTooltipContext* Context, const struct FName& Token, struct FText* OutText);
	bool GetTextForTokenInternal(class UObject* ObjectToDescribe, const struct FGameplayTag& Tag, class UFortTooltipContext* Context, const struct FName& Token, struct FText* OutText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
