#include "TutorialTemplate.h"

FTutorialTemplate::FTutorialTemplate() {
    this->RowId = 0;
    this->TutorialGroupId = 0;
    this->StartSelectAble = false;
    this->PauseAble = false;
    this->BgAble = false;
    this->UiGuide = ETutorialUIGuideType::NoGuidBox;
    this->UIGuideType = EUIGuideType::COMMENT;
    this->UiGuideStringId = 0;
    this->UiGuideStringSide = ETutorialGuidStrPosType::None;
    this->NpcGuide = 0;
    this->NpcGuideStringId = 0;
    this->SoundGuideId = 0;
    this->StepEndType = ETutorialStepEndType::None;
    this->StepEndValue = 0.00f;
    this->StartDelaySec = 0.00f;
    this->RotationYaw = 0.00f;
}

