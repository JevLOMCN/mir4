#include "MovieSceneCameraShakeSectionData.h"

FMovieSceneCameraShakeSectionData::FMovieSceneCameraShakeSectionData() {
    this->ShakeClass = NULL;
    this->PlayScale = 0.00f;
    this->PlaySpace = ECameraAnimPlaySpace::CameraLocal;
}

