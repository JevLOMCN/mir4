#include "MMUISkyLight.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AMMUISkyLight::AMMUISkyLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->UICharacterMaterialParameterCollection = NULL;
    this->UpperLightIntensity = 1.00f;
    this->LowerLightIntensity = 1.00f;
    this->ReflectionIntensity = 1.00f;
    this->RimIntensity = 1.00f;
}


