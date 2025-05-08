#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "MovieSceneActorReferenceKey.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneActorReferenceKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID Object;
    
    MOVIESCENETRACKS_API FMovieSceneActorReferenceKey();
};

