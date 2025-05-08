#include "UIParticleEmitterAsset.h"

UUIParticleEmitterAsset::UUIParticleEmitterAsset() {
    this->EmitterType = EEmitterType::Gravity;
    this->EmitSeconds = 1.00f;
    this->AutoEmitPosRange = false;
    this->AutoScale = false;
    this->ScaleByX = true;
    this->PositionType = EPositionType::FREE;
    this->ResourceObject = NULL;
    this->RotationFollowSpeed = false;
    this->UseSeparateSize = false;
    this->DrawEffect = EParticleDrawEffect::None;
    this->UseScaleFollowSpeedDirection = false;
    this->UseScaleFollowSpeedVertical = false;
}


