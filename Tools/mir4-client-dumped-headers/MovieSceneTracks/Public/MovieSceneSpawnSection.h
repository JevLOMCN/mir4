#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBoolSection.h"
#include "MovieSceneSpawnSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection {
    GENERATED_BODY()
public:
    UMovieSceneSpawnSection();

};

