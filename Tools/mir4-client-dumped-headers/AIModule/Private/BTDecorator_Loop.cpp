#include "BTDecorator_Loop.h"

UBTDecorator_Loop::UBTDecorator_Loop() {
    this->NodeName = TEXT("Loop");
    this->NumLoops = 3;
    this->bInfiniteLoop = false;
    this->InfiniteLoopTimeoutTime = -1.00f;
}


