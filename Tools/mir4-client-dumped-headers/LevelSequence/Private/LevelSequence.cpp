#include "LevelSequence.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneCompletionMode -FallbackName=EMovieSceneCompletionMode

ULevelSequence::ULevelSequence() {
    this->DefaultCompletionMode = EMovieSceneCompletionMode::RestoreState;
    this->bParentContextsAreSignificant = true;
    this->MovieScene = NULL;
    this->DirectorClass = NULL;
}

void ULevelSequence::RemoveMetaDataByClass(UClass* InClass) {
}

UObject* ULevelSequence::FindOrAddMetaDataByClass(UClass* InClass) {
    return NULL;
}

UObject* ULevelSequence::FindMetaDataByClass(UClass* InClass) const {
    return NULL;
}

UObject* ULevelSequence::CopyMetaData(UObject* InMetaData) {
    return NULL;
}


