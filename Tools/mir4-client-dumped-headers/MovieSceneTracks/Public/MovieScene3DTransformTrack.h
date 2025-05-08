#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieScene3DTransformTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieScene3DTransformTrack();

};

