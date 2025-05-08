#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneByteChannel -FallbackName=MovieSceneByteChannel
#include "MovieSceneParticleChannel.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel {
    GENERATED_BODY()
public:
    MOVIESCENETRACKS_API FMovieSceneParticleChannel();
};

