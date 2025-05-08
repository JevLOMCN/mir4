#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneAdditiveCameraAnimationTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    MOVIESCENETRACKS_API FMovieSceneAdditiveCameraAnimationTemplate();
};

