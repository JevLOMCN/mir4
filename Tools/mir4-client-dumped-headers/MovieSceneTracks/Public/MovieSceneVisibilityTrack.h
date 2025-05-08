#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBoolTrack.h"
#include "MovieSceneVisibilityTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack {
    GENERATED_BODY()
public:
    UMovieSceneVisibilityTrack();

};

