#include "MovieScene3DPathSectionTemplate.h"

FMovieScene3DPathSectionTemplate::FMovieScene3DPathSectionTemplate() {
    this->FrontAxisEnum = MovieScene3DPathSection_Axis::X;
    this->UpAxisEnum = MovieScene3DPathSection_Axis::X;
    this->bFollow = false;
    this->bReverse = false;
    this->bForceUpright = false;
}

