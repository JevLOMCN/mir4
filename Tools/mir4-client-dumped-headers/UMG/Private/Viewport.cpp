#include "Viewport.h"
#include "Templates/SubclassOf.h"

UViewport::UViewport() {
}

AActor* UViewport::Spawn(TSubclassOf<AActor> ActorClass) {
    return NULL;
}

void UViewport::SetViewRotation(FRotator Rotation) {
}

void UViewport::SetViewLocation(FVector Location) {
}

FRotator UViewport::GetViewRotation() const {
    return FRotator{};
}

UWorld* UViewport::GetViewportWorld() const {
    return NULL;
}

FVector UViewport::GetViewLocation() const {
    return FVector{};
}


