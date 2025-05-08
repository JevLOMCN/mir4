#include "AirWalkTemplate.h"

FAirWalkTemplate::FAirWalkTemplate() {
    this->AirWalkId = 0;
    this->ClassID = 0;
    this->AirStep = 0;
    this->AirCoolTime = 0.00f;
    this->StandardSpeed = 0;
    this->AirStandHeight = 0;
    this->AirMoveHeight = 0;
    this->AirWalkTime = 0.00f;
    this->UnableTime = 0.00f;
    this->AvailableTime = 0.00f;
    this->AirMotionBlur = false;
    this->DashReady = 0.00f;
    this->DashStart = 0.00f;
    this->FallStartSpeed = 0.00f;
}

