#include "MovieScene3DPathSection.h"

UMovieScene3DPathSection::UMovieScene3DPathSection() {
    this->FrontAxisEnum = MovieScene3DPathSection_Axis::Y;
    this->UpAxisEnum = MovieScene3DPathSection_Axis::Z;
    this->bFollow = true;
    this->bReverse = false;
    this->bForceUpright = false;
}


