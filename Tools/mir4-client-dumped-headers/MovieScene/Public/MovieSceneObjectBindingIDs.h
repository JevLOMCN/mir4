#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneObjectBindingIDs.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneObjectBindingIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneObjectBindingID> IDs;
    
    MOVIESCENE_API FMovieSceneObjectBindingIDs();
};

