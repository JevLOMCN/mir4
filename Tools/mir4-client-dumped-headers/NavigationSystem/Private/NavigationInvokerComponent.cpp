#include "NavigationInvokerComponent.h"

UNavigationInvokerComponent::UNavigationInvokerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TileGenerationRadius = 3000.00f;
    this->TileRemovalRadius = 5000.00f;
}


