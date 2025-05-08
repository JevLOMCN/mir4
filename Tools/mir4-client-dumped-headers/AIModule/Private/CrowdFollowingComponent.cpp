#include "CrowdFollowingComponent.h"

UCrowdFollowingComponent::UCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterMovement = NULL;
}

void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend) {
}


