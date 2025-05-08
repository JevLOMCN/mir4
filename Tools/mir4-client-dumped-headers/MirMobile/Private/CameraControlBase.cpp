#include "CameraControlBase.h"

ACameraControlBase::ACameraControlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProbeChannel = ECC_WorldStatic;
    this->StartCollisionGap = 0.00f;
    this->CollisionSphere = 0.00f;
    this->CollisionPullSpeed = 20.00f;
    this->CollisionReturnSpeed = 5.00f;
    this->m_bDoCollision = false;
    this->DarkChangeCollection = NULL;
    this->FlyDashCollection = NULL;
}

void ACameraControlBase::ZoomScreen(float zoomsize) {
}

void ACameraControlBase::CameraInitialize(AMM_MainPC* MainPC) {
}


