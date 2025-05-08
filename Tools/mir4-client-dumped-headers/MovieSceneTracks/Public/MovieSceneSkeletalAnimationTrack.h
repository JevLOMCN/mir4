#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
#include "MovieSceneSkeletalAnimationTrack.generated.h"

class UMovieSceneSection;
class UMovieSceneSkeletalAnimationOptimizedSection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> AnimationSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneSkeletalAnimationOptimizedSection* AnimationOptimizedSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacySectionIndexBlend;
    
public:
    UMovieSceneSkeletalAnimationTrack();

};

