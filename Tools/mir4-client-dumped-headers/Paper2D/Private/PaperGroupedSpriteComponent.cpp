#include "PaperGroupedSpriteComponent.h"

UPaperGroupedSpriteComponent::UPaperGroupedSpriteComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
}

bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return false;
}

bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int32 InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty) {
    return false;
}

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(FVector WorldSpaceSortAxis) {
}

bool UPaperGroupedSpriteComponent::RemoveInstance(int32 InstanceIndex) {
    return false;
}

bool UPaperGroupedSpriteComponent::GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace) const {
    return false;
}

int32 UPaperGroupedSpriteComponent::GetInstanceCount() const {
    return 0;
}

void UPaperGroupedSpriteComponent::ClearInstances() {
}

int32 UPaperGroupedSpriteComponent::AddInstance(const FTransform& Transform, UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color) {
    return 0;
}


