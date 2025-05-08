#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSegment.h"
#include "MovieSceneEvaluationTrackSegments.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationTrackSegments {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SegmentIdentifierToIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneSegment> SortedSegments;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationTrackSegments();
};

