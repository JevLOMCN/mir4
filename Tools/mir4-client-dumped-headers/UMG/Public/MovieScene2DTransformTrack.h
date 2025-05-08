#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieScenePropertyTrack -FallbackName=MovieScenePropertyTrack
#include "MovieScene2DTransformTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieScene2DTransformTrack();

};

