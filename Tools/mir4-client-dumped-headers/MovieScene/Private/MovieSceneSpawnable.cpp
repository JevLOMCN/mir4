#include "MovieSceneSpawnable.h"

FMovieSceneSpawnable::FMovieSceneSpawnable() {
    this->bContinuouslyRespawn = false;
    this->ObjectTemplate = NULL;
    this->OwnerShip = ESpawnOwnership::InnerSequence;
}

