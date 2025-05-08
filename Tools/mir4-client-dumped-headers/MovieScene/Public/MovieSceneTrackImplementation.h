#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvalTemplateBase.h"
#include "MovieSceneTrackImplementation.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase {
    GENERATED_BODY()
public:
    MOVIESCENE_API FMovieSceneTrackImplementation();
};

