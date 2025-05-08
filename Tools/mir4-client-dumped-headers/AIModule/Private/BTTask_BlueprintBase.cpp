#include "BTTask_BlueprintBase.h"

UBTTask_BlueprintBase::UBTTask_BlueprintBase() {
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->bShowPropertyDetails = true;
}

void UBTTask_BlueprintBase::SetFinishOnMessageWithId(FName MessageName, int32 RequestID) {
}

void UBTTask_BlueprintBase::SetFinishOnMessage(FName MessageName) {
}







bool UBTTask_BlueprintBase::IsTaskExecuting() const {
    return false;
}

bool UBTTask_BlueprintBase::IsTaskAborting() const {
    return false;
}

void UBTTask_BlueprintBase::FinishExecute(bool bSuccess) {
}

void UBTTask_BlueprintBase::FinishAbort() {
}


