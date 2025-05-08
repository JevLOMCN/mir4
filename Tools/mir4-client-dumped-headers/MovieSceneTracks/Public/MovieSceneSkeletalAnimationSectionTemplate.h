#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneSkeletalAnimationSectionTemplateParameters.h"
#include "MovieSceneSkeletalAnimationSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;
    
    MOVIESCENETRACKS_API FMovieSceneSkeletalAnimationSectionTemplate();
};

