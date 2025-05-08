#pragma once
#include "CoreMinimal.h"
#include "MovieScene3DConstraintTrack.h"
#include "MovieScene3DPathTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack {
    GENERATED_BODY()
public:
    UMovieScene3DPathTrack();

};

