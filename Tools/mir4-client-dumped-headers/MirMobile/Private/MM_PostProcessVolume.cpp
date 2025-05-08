#include "MM_PostProcessVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OverrideDirectionalLight -FallbackName=OverrideDirectionalLight
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OverrideExponentialHeightFog -FallbackName=OverrideExponentialHeightFog

AMM_PostProcessVolume::AMM_PostProcessVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectGlobalBrightness = 1.00f;
    this->CharacterEffectBrightness = 1.00f;
    this->CharacterIndirectScale = 1.00f;
    this->BGBaseColorScale = 1.00f;
    this->isUIVolume = false;
    this->isOverrideDirectionalLight = false;
    this->OverrideDirectionalLight = CreateDefaultSubobject<UOverrideDirectionalLight>(TEXT("OverrideDirectionalLight"));
    this->isOverrideExponentialHeightFog = false;
    this->OverrideExponentialHeightFog = CreateDefaultSubobject<UOverrideExponentialHeightFog>(TEXT("OverrideExponentialHeightFog"));
}


