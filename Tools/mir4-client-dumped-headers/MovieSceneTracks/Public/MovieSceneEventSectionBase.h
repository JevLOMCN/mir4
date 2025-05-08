#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneEventSectionBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEventSectionBase : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UMovieSceneEventSectionBase();

};

