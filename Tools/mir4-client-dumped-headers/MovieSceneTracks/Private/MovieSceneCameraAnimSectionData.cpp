#include "MovieSceneCameraAnimSectionData.h"

FMovieSceneCameraAnimSectionData::FMovieSceneCameraAnimSectionData() {
    this->CameraAnim = NULL;
    this->PlayRate = 0.00f;
    this->PlayScale = 0.00f;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->bLooping = false;
}

