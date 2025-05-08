#include "SkillCameraValue.h"

FSkillCameraValue::FSkillCameraValue() {
    this->UseManualCamera = false;
    this->SkillCameraDuration = 0.00f;
    this->pZoomCameraCurve = NULL;
    this->LookAtOffsetCheck = false;
    this->pLookAtOffsetCurve = NULL;
    this->CameraAngleCheck = false;
    this->MaintainCurrentAngle = false;
    this->pCameraAngleCurve = NULL;
    this->pLookAtBoneSpeedCurve = NULL;
}

