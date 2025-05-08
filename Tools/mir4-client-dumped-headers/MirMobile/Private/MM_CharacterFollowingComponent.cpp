#include "MM_CharacterFollowingComponent.h"

UMM_CharacterFollowingComponent::UMM_CharacterFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkipTooSmallSegmentRecursiveCount = 0;
}


