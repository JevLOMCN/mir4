#include "MovieSceneCameraShakeSection.h"

UMovieSceneCameraShakeSection::UMovieSceneCameraShakeSection() {
    this->ShakeClass = NULL;
    this->PlayScale = 1.00f;
    this->PlaySpace = ECameraAnimPlaySpace::CameraLocal;
}


