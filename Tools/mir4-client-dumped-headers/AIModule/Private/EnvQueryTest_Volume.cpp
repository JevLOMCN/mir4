#include "EnvQueryTest_Volume.h"

UEnvQueryTest_Volume::UEnvQueryTest_Volume() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->VolumeContext = NULL;
    this->VolumeClass = NULL;
    this->bDoComplexVolumeTest = false;
}


