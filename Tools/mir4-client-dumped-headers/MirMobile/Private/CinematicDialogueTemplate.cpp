#include "CinematicDialogueTemplate.h"

FCinematicDialogueTemplate::FCinematicDialogueTemplate() {
    this->CinematicDialogueID = 0;
    this->TalkNpcID = 0;
    this->DialogueEndCheck = false;
    this->CameraShake = 0;
    this->CameraShakeDelay = 0.00f;
    this->CameraPresetID = 0;
    this->CameraMoveSpeed = 0.00f;
    this->CameraFov = 0.00f;
    this->PlayTime = 0.00f;
    this->DialogueSkipDelay = 0.00f;
    this->Sound_Male = 0;
    this->Sound_Female = 0;
    this->DOF_FocalDistance = 0.00f;
    this->DOF_FarTransitionRegion = 0.00f;
    this->DOF_NearBlurSize = 0.00f;
    this->DOF_FarBlurSize = 0.00f;
    this->DOF_Scale = 0.00f;
}

