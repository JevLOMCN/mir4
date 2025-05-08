#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KeyHandleLookupTable -FallbackName=KeyHandleLookupTable
#include "MovieSceneKeyHandleMap.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable {
    GENERATED_BODY()
public:
    MOVIESCENE_API FMovieSceneKeyHandleMap();
};

