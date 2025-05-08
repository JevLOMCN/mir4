#include "BrainComponent.h"

UBrainComponent::UBrainComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlackboardComp = NULL;
    this->AIOwner = NULL;
}

void UBrainComponent::StopLogic(const FString& Reason) {
}

void UBrainComponent::RestartLogic() {
}

bool UBrainComponent::IsRunning() const {
    return false;
}

bool UBrainComponent::IsPaused() const {
    return false;
}


