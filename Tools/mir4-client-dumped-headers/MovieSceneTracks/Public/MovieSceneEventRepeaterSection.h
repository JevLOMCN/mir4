#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvent.h"
#include "MovieSceneEventSectionBase.h"
#include "MovieSceneEventRepeaterSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvent Event;
    
    UMovieSceneEventRepeaterSection();

};

