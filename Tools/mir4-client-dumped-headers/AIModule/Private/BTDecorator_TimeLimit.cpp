#include "BTDecorator_TimeLimit.h"

UBTDecorator_TimeLimit::UBTDecorator_TimeLimit() {
    this->NodeName = TEXT("TimeLimit");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->TimeLimit = 5.00f;
}


