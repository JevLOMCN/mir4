#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBoolPropertySectionTemplate.h"
#include "MovieSceneVisibilitySectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate {
    GENERATED_BODY()
public:
    MOVIESCENETRACKS_API FMovieSceneVisibilitySectionTemplate();
};

