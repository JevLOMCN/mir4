#include "LandscapeMeshCollisionComponent.h"

ULandscapeMeshCollisionComponent::ULandscapeMeshCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysCreatePhysicsState = true;
}


