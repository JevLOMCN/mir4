#include "SynthSound.h"

USynthSound::USynthSound() : USoundWaveProcedural(FObjectInitializer::Get()) {
    this->FrequenciesToAnalyze.AddDefaulted(4);
    this->OwningSynthComponent = NULL;
}


