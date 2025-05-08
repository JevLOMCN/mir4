#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
#include "MovieSceneAudioTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneAudioTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> AudioSections;
    
public:
    UMovieSceneAudioTrack();

};

