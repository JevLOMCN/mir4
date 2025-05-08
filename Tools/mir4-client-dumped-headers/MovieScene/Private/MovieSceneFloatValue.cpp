#include "MovieSceneFloatValue.h"

FMovieSceneFloatValue::FMovieSceneFloatValue() {
    this->Value = 0.00f;
    this->InterpMode = RCIM_Linear;
    this->TangentMode = RCTM_Auto;
}

