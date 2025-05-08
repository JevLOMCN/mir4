#include "PathFollowingComponent.h"

UPathFollowingComponent::UPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->MovementComp = NULL;
    this->MyNavData = NULL;
}

void UPathFollowingComponent::OnNavDataRegistered(ANavigationData* NavData) {
}

void UPathFollowingComponent::OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

FVector UPathFollowingComponent::GetPathDestination() const {
    return FVector{};
}

TEnumAsByte<EPathFollowingAction::Type> UPathFollowingComponent::GetPathActionType() const {
    return EPathFollowingAction::Error;
}


