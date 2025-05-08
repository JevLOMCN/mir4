#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneStringTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneStringTrack();

};

