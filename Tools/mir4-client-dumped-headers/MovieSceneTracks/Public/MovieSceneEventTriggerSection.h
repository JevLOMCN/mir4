#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventChannel.h"
#include "MovieSceneEventSectionBase.h"
#include "MovieSceneEventTriggerSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEventChannel EventChannel;
    
    UMovieSceneEventTriggerSection();

};

