#include "BTDecorator_CheckGameplayTagsOnActor.h"

UBTDecorator_CheckGameplayTagsOnActor::UBTDecorator_CheckGameplayTagsOnActor() {
    this->NodeName = TEXT("Gameplay Tag Condition");
    this->TagsToMatch = EGameplayContainerMatchType::Any;
}


