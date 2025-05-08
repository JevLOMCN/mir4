#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ConfigFileName = TEXT("../../../MirMobile/Config/DefaultGameplayTags.ini");
    this->ImportTagsFromConfig = true;
    this->WarnOnInvalidTags = true;
    this->FastReplication = false;
    this->InvalidTagCharacters = TEXT("\"',");
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}


