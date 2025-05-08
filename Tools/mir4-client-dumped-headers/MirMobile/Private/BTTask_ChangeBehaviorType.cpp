#include "BTTask_ChangeBehaviorType.h"

UBTTask_ChangeBehaviorType::UBTTask_ChangeBehaviorType() {
    this->NodeName = TEXT("ChangeBehaviorType");
    this->ReturnResult = EBTNodeResult::Failed;
    this->NewBehaviorType = EBehaviorType::Default;
}


