#include "MovieSceneCameraAnimSection.h"

UMovieSceneCameraAnimSection::UMovieSceneCameraAnimSection() {
    this->CameraAnim = NULL;
    this->PlayRate = 1.00f;
    this->PlayScale = 1.00f;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->bLooping = false;
}


