#include "LandscapeHeightfieldCollisionComponent.h"

ULandscapeHeightfieldCollisionComponent::ULandscapeHeightfieldCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetAddressable = true;
    this->bCanEverAffectNavigation = true;
    this->Mobility = EComponentMobility::Static;
    this->bAllowCullDistanceVolume = false;
    this->bUseAsOccluder = true;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->SectionBaseX = 0;
    this->SectionBaseY = 0;
    this->CollisionSizeQuads = 0;
    this->CollisionScale = 0.00f;
    this->SimpleCollisionSizeQuads = 0;
}

ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent() const {
    return NULL;
}


