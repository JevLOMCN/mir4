#include "NavLinkRenderingComponent.h"

UNavLinkRenderingComponent::UNavLinkRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
}


