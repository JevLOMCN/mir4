#include "MMUIDirectionalLightComponent.h"

UMMUIDirectionalLightComponent::UMMUIDirectionalLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UICharacterMaterialParameterCollection = NULL;
    this->LightIntensity = 1.00f;
    this->IsSecondLight = false;
}


