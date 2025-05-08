#pragma once
#include "CoreMinimal.h"
#include "MovieSceneOrderedEvaluationKey.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneEvaluationMetaData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneSequenceID> ActiveSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneSequenceID, uint32> SubTemplateSerialNumbers;
    
    MOVIESCENE_API FMovieSceneEvaluationMetaData();
};

