#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPtrs.h"
#include "MovieSceneEventTemplateBase.h"
#include "MovieSceneEventRepeaterTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEventRepeaterTemplate : public FMovieSceneEventTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEventPtrs EventToTrigger;
    
    MOVIESCENETRACKS_API FMovieSceneEventRepeaterTemplate();
};

