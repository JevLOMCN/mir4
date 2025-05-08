#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    MOVIESCENE_API FMovieSceneSequenceID();
};
FORCEINLINE uint32 GetTypeHash(const FMovieSceneSequenceID) { return 0; }

