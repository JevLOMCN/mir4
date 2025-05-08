#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneSkeletalAnimationOptimizedSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSkeletalAnimationOptimizedSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    MOVIESCENETRACKS_API FMovieSceneSkeletalAnimationOptimizedSectionTemplate();
};

