#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventParameters.h"
#include "EventPayload.generated.h"

USTRUCT(BlueprintType)
struct FEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEventParameters Parameters;
    
    MOVIESCENETRACKS_API FEventPayload();
};

