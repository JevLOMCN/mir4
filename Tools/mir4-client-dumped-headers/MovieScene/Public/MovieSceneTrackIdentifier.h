#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTrackIdentifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    MOVIESCENE_API FMovieSceneTrackIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FMovieSceneTrackIdentifier) { return 0; }

