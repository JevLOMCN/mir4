#include "BTTask_StopBehavior.h"

UBTTask_StopBehavior::UBTTask_StopBehavior() {
    this->NodeName = TEXT("StopBehavior");
    this->ReturnResult = EBTNodeResult::Failed;
    this->IsCounterAttack = false;
}


