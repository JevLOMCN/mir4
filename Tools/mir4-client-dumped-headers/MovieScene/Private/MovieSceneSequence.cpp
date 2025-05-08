#include "MovieSceneSequence.h"

UMovieSceneSequence::UMovieSceneSequence() {
    this->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
    this->bParentContextsAreSignificant = false;
    this->bPlayableDirectly = true;
}

TArray<FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(FName InBindingName) const {
    return TArray<FMovieSceneObjectBindingID>();
}

FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(FName InBindingName) const {
    return FMovieSceneObjectBindingID{};
}


