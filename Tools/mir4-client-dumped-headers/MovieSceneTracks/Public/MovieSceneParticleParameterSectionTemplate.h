#pragma once
#include "CoreMinimal.h"
#include "MovieSceneParameterSectionTemplate.h"
#include "MovieSceneParticleParameterSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    MOVIESCENETRACKS_API FMovieSceneParticleParameterSectionTemplate();
};

