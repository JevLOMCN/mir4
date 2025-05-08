#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCompletionMode.h"
#include "MovieSceneSectionEvalOptions.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSectionEvalOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditCompletionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneCompletionMode CompletionMode;
    
    MOVIESCENE_API FMovieSceneSectionEvalOptions();
};

