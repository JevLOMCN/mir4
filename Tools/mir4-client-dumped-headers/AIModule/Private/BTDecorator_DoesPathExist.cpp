#include "BTDecorator_DoesPathExist.h"

UBTDecorator_DoesPathExist::UBTDecorator_DoesPathExist() {
    this->NodeName = TEXT("Does path exist");
    this->bUseSelf = false;
    this->PathQueryType = EPathExistanceQueryType::HierarchicalQuery;
    this->FilterClass = NULL;
}


