#include "MovieSceneCaptureSettings.h"

FMovieSceneCaptureSettings::FMovieSceneCaptureSettings() {
    this->GameModeOverride = NULL;
    this->bOverwriteExisting = false;
    this->bUseRelativeFrameNumbers = false;
    this->HandleFrames = 0;
    this->ZeroPadFrameNumbers = 0;
    this->bUseCustomFrameRate = false;
    this->bEnableTextureStreaming = false;
    this->bCinematicEngineScalability = false;
    this->bCinematicMode = false;
    this->bAllowMovement = false;
    this->bAllowTurning = false;
    this->bShowPlayer = false;
    this->bShowHUD = false;
    this->bUsePathTracer = false;
    this->PathTracerSamplePerPixel = 0;
}

