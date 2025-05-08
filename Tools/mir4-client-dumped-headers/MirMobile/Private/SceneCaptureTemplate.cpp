#include "SceneCaptureTemplate.h"

FSceneCaptureTemplate::FSceneCaptureTemplate() {
    this->ClassType = EClassType::NONE;
    this->SceneType = EContentsSceneType::NONE;
    this->CameraPitch_01 = 0.00f;
    this->CameraFOV_01 = 0.00f;
    this->CameraPitch_02 = 0.00f;
    this->CameraFOV_02 = 0.00f;
    this->CameraPitch_03 = 0.00f;
    this->CameraFOV_03 = 0.00f;
    this->AnimInstanceID = 0;
}

