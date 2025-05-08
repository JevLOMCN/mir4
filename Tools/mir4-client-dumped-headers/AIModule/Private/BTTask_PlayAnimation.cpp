#include "BTTask_PlayAnimation.h"

UBTTask_PlayAnimation::UBTTask_PlayAnimation() {
    this->NodeName = TEXT("Play Animation");
    this->AnimationToPlay = NULL;
    this->bLooping = false;
    this->bNonBlocking = false;
    this->MyOwnerComp = NULL;
    this->CachedSkelMesh = NULL;
}


