#include "MovieScene3DConstraintSection.h"

UMovieScene3DConstraintSection::UMovieScene3DConstraintSection() {
    this->bSupportsInfiniteRange = true;
}

void UMovieScene3DConstraintSection::SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID) {
}

FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID() const {
    return FMovieSceneObjectBindingID{};
}


