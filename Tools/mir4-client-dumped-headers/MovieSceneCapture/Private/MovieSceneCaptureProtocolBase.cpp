#include "MovieSceneCaptureProtocolBase.h"

UMovieSceneCaptureProtocolBase::UMovieSceneCaptureProtocolBase() {
    this->State = EMovieSceneCaptureProtocolState::Idle;
}

bool UMovieSceneCaptureProtocolBase::IsCapturing() const {
    return false;
}

EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState() const {
    return EMovieSceneCaptureProtocolState::Idle;
}


