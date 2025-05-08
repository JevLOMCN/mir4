#include "GameplayTask.h"

UGameplayTask::UGameplayTask() {
    this->ResourceOverlapPolicy = ETaskResourceOverlapPolicy::StartOnTop;
    this->ChildTask = NULL;
}

void UGameplayTask::ReadyForActivation() {
}

void UGameplayTask::EndTask() {
}


