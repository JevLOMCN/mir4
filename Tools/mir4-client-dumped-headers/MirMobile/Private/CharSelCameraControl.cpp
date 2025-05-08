#include "CharSelCameraControl.h"

ACharSelCameraControl::ACharSelCameraControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pBackupCameraActor = NULL;
}


