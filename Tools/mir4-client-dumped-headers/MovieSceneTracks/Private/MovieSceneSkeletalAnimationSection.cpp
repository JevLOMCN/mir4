#include "MovieSceneSkeletalAnimationSection.h"

UMovieSceneSkeletalAnimationSection::UMovieSceneSkeletalAnimationSection() {
    this->AnimSequence = NULL;
    this->Animation = NULL;
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
    this->PlayRate = 1.00f;
    this->bReverse = false;
    this->SlotName = TEXT("DefaultSlot");
}


