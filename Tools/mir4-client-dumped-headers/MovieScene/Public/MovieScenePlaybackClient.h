#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MovieScenePlaybackClient.generated.h"

UINTERFACE()
class MOVIESCENE_API UMovieScenePlaybackClient : public UInterface {
    GENERATED_BODY()
};

class MOVIESCENE_API IMovieScenePlaybackClient : public IInterface {
    GENERATED_BODY()
public:
};

