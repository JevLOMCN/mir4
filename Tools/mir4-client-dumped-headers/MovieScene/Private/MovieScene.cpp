#include "MovieScene.h"

UMovieScene::UMovieScene() {
    this->CameraCutTrack = NULL;
    this->EvaluationType = EMovieSceneEvaluationType::WithSubFrames;
    this->ClockSource = EUpdateClockSource::Tick;
}


