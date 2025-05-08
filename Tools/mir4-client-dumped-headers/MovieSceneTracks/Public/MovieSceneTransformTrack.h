#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneTransformTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneTransformTrack();

};

