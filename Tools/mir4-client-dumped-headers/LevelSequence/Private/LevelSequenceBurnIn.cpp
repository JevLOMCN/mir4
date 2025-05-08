#include "LevelSequenceBurnIn.h"
#include "Templates/SubclassOf.h"

ULevelSequenceBurnIn::ULevelSequenceBurnIn() : UUserWidget(FObjectInitializer::Get()) {
    this->LevelSequenceActor = NULL;
}


TSubclassOf<ULevelSequenceBurnInInitSettings> ULevelSequenceBurnIn::GetSettingsClass_Implementation() const {
    return NULL;
}


