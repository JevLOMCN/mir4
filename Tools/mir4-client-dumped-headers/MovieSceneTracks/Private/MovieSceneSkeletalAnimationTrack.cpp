#include "MovieSceneSkeletalAnimationTrack.h"
#include "MovieSceneSkeletalAnimationOptimizedSection.h"

UMovieSceneSkeletalAnimationTrack::UMovieSceneSkeletalAnimationTrack() {
    this->AnimationOptimizedSection = CreateDefaultSubobject<UMovieSceneSkeletalAnimationOptimizedSection>(TEXT("AnimationOptimizedSection"));
    this->bUseLegacySectionIndexBlend = false;
}


