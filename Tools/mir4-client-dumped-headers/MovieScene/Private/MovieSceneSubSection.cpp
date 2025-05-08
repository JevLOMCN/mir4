#include "MovieSceneSubSection.h"

UMovieSceneSubSection::UMovieSceneSubSection() {
    this->StartOffset = -340282346638528859811704183484516925440.00f;
    this->TimeScale = -340282346638528859811704183484516925440.00f;
    const FProperty* p_PrerollTime = GetClass()->FindPropertyByName("PrerollTime");
    (*p_PrerollTime->ContainerPtrToValuePtr<float>(this)) = -340282346638528859811704183484516925440.00f;
    this->SubSequence = NULL;
}

void UMovieSceneSubSection::SetSequence(UMovieSceneSequence* Sequence) {
}

UMovieSceneSequence* UMovieSceneSubSection::GetSequence() const {
    return NULL;
}


