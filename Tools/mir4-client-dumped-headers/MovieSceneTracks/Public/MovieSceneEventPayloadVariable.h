#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPayloadVariable.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEventPayloadVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    MOVIESCENETRACKS_API FMovieSceneEventPayloadVariable();
};

