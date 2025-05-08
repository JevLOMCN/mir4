#include "MovieSceneEvaluationTrack.h"

FMovieSceneEvaluationTrack::FMovieSceneEvaluationTrack() {
    this->EvaluationPriority = 0;
    this->EvaluationMethod = EEvaluationMethod::Static;
    this->SourceTrack = NULL;
    this->bEvaluateInPreroll = false;
    this->bEvaluateInPostroll = false;
    this->bTearDownPriority = false;
}

