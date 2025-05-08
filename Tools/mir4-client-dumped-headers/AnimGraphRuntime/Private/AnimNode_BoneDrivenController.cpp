#include "AnimNode_BoneDrivenController.h"

FAnimNode_BoneDrivenController::FAnimNode_BoneDrivenController() {
    this->DrivingCurve = NULL;
    this->Multiplier = 0.00f;
    this->RangeMin = 0.00f;
    this->RangeMax = 0.00f;
    this->RemappedMin = 0.00f;
    this->RemappedMax = 0.00f;
    this->DestinationMode = EDrivenDestinationMode::Bone;
    this->ModificationMode = EDrivenBoneModificationMode::AddToInput;
    this->SourceComponent = EComponentType::None;
    this->bUseRange = false;
    this->bAffectTargetTranslationX = false;
    this->bAffectTargetTranslationY = false;
    this->bAffectTargetTranslationZ = false;
    this->bAffectTargetRotationX = false;
    this->bAffectTargetRotationY = false;
    this->bAffectTargetRotationZ = false;
    this->bAffectTargetScaleX = false;
    this->bAffectTargetScaleY = false;
    this->bAffectTargetScaleZ = false;
}

