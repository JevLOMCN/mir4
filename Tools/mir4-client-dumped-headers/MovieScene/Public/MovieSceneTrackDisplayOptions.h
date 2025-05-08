#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackDisplayOptions.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTrackDisplayOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowVerticalFrames: 1;
    
    MOVIESCENE_API FMovieSceneTrackDisplayOptions();
};

