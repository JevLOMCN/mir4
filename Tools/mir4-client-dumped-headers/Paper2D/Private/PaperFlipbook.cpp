#include "PaperFlipbook.h"

UPaperFlipbook::UPaperFlipbook() {
    this->FramesPerSecond = 15.00f;
    this->CollisionSource = EFlipbookCollisionMode::NoCollision;
}

bool UPaperFlipbook::IsValidKeyFrameIndex(int32 Index) const {
    return false;
}

float UPaperFlipbook::GetTotalDuration() const {
    return 0.0f;
}

UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds) const {
    return NULL;
}

UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int32 FrameIndex) const {
    return NULL;
}

int32 UPaperFlipbook::GetNumKeyFrames() const {
    return 0;
}

int32 UPaperFlipbook::GetNumFrames() const {
    return 0;
}

int32 UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds) const {
    return 0;
}


