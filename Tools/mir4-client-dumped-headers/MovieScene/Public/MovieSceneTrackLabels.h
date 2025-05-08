#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackLabels.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTrackLabels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Strings;
    
    MOVIESCENE_API FMovieSceneTrackLabels();
};

