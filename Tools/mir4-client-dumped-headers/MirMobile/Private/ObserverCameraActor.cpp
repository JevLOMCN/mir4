#include "ObserverCameraActor.h"

AObserverCameraActor::AObserverCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MoveSpeed = 0.00f;
    this->m_MouseSensitivity = 0.00f;
    this->m_MouseWheelSensitivity = 0.00f;
    this->m_CameraDistanceMin = 0.00f;
    this->m_CameraDistanceMax = 0.00f;
    this->m_CameraPitchMin = 0.00f;
    this->m_CameraPitchMax = 0.00f;
    this->m_CameraHeightGap = 0.00f;
    this->m_CameraSphere = 0.00f;
}


