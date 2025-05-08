#include "LandscapeSplinesComponent.h"

ULandscapeSplinesComponent::ULandscapeSplinesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
}

TArray<USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents() {
    return TArray<USplineMeshComponent*>();
}


