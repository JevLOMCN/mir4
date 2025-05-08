#include "NavRelevantComponent.h"

UNavRelevantComponent::UNavRelevantComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->bAttachToOwnersRoot = true;
    this->CachedNavParent = NULL;
}

void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant) {
}


