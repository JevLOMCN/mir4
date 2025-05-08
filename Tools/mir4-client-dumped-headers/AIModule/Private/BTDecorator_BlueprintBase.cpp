#include "BTDecorator_BlueprintBase.h"

UBTDecorator_BlueprintBase::UBTDecorator_BlueprintBase() {
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->bShowPropertyDetails = true;
    this->bCheckConditionOnlyBlackBoardChanges = false;
    this->bIsObservingBB = false;
}













bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive() const {
    return false;
}

bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive() const {
    return false;
}


