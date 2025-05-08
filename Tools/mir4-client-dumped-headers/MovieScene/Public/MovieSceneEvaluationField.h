#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationGroup.h"
#include "MovieSceneEvaluationMetaData.h"
#include "MovieSceneFrameRange.h"
#include "MovieSceneEvaluationField.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationField {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneFrameRange> Ranges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationGroup> Groups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationMetaData> metadata;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationField();
};

