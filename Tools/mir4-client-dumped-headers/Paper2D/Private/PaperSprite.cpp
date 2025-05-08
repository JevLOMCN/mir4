#include "PaperSprite.h"

UPaperSprite::UPaperSprite() {
    this->BakedSourceTexture = NULL;
    this->SpriteCollisionDomain = ESpriteCollisionMode::Use3DPhysics;
    this->PixelsPerUnrealUnit = 2.56f;
    this->BodySetup = NULL;
    this->AlternateMaterialSplitIndex = -1;
}


