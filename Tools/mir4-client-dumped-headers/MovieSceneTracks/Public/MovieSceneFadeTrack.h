#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFloatTrack.h"
#include "MovieSceneFadeTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack {
    GENERATED_BODY()
public:
    UMovieSceneFadeTrack();

};

