#include "GameplayTagSource.h"

FGameplayTagSource::FGameplayTagSource() {
    this->SourceType = EGameplayTagSourceType::Native;
    this->SourceTagList = NULL;
    this->SourceRestrictedTagList = NULL;
}

