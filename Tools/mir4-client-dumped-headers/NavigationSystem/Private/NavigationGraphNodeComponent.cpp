#include "NavigationGraphNodeComponent.h"

UNavigationGraphNodeComponent::UNavigationGraphNodeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NextNodeComponent = NULL;
    this->PrevNodeComponent = NULL;
}


