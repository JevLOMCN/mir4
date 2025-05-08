#include "MovieSceneSequenceReplProperties.h"

FMovieSceneSequenceReplProperties::FMovieSceneSequenceReplProperties() {
    this->LastKnownStatus = EMovieScenePlayerStatus::Stopped;
    this->LastKnownNumLoops = 0;
}

