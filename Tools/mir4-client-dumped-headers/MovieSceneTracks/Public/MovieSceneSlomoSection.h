#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFloatSection.h"
#include "MovieSceneSlomoSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection {
    GENERATED_BODY()
public:
    UMovieSceneSlomoSection();

};

