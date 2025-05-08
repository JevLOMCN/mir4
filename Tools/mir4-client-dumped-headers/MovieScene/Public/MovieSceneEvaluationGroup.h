#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldSegmentPtr.h"
#include "MovieSceneEvaluationGroupLUTIndex.h"
#include "MovieSceneEvaluationGroup.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;
    
    MOVIESCENE_API FMovieSceneEvaluationGroup();
};

