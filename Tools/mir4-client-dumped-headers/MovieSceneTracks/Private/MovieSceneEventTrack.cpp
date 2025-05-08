#include "MovieSceneEventTrack.h"

UMovieSceneEventTrack::UMovieSceneEventTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AfterSpawn;
}


