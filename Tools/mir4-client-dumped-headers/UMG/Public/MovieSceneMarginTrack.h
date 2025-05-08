#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieScenePropertyTrack -FallbackName=MovieScenePropertyTrack
#include "MovieSceneMarginTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneMarginTrack();

};

