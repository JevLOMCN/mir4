#include "ActorSequence.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScene -FallbackName=MovieScene

UActorSequence::UActorSequence() {
    this->bParentContextsAreSignificant = true;
    this->MovieScene = CreateDefaultSubobject<UMovieScene>(TEXT("MovieScene"));
}


