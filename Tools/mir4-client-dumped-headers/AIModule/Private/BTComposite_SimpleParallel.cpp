#include "BTComposite_SimpleParallel.h"

UBTComposite_SimpleParallel::UBTComposite_SimpleParallel() {
    this->NodeName = TEXT("Simple Parallel");
    this->bApplyDecoratorScope = true;
    this->FinishMode = EBTParallelMode::AbortBackground;
}


