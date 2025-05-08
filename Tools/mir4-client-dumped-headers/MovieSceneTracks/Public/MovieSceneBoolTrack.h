#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneBoolTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneBoolTrack();

};

