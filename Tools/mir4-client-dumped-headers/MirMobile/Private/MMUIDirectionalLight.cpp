#include "MMUIDirectionalLight.h"
#include "MMUIDirectionalLightComponent.h"

AMMUIDirectionalLight::AMMUIDirectionalLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMMUIDirectionalLightComponent>(TEXT("LightComponent0"));
    this->LightComponent = (UMMUIDirectionalLightComponent*)RootComponent;
}


