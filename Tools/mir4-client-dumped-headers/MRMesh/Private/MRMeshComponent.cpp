#include "MRMeshComponent.h"

UMRMeshComponent::UMRMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Material = NULL;
    this->bCreateMeshProxySections = true;
    this->bUpdateNavMeshOnMeshUpdate = true;
    this->bNeverCreateCollisionMesh = false;
    this->CachedBodySetup = NULL;
}

bool UMRMeshComponent::IsConnected() const {
    return false;
}

void UMRMeshComponent::ForceNavMeshUpdate() {
}

void UMRMeshComponent::Clear() {
}


