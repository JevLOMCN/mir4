#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPtrs.generated.h"

class UFunction;
class UProperty;

USTRUCT(BlueprintType)
struct FMovieSceneEventPtrs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProperty* BoundObjectProperty;
    
    MOVIESCENETRACKS_API FMovieSceneEventPtrs();
};

