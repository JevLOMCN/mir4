#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPtrs.h"
#include "MovieSceneEvent.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEventPtrs Ptrs;
    
    MOVIESCENETRACKS_API FMovieSceneEvent();
};

