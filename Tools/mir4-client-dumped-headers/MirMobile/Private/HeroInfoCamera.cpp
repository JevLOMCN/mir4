#include "HeroInfoCamera.h"

AHeroInfoCamera::AHeroInfoCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayActor = NULL;
    this->WheelCameraType = 0;
    this->UIBackGroundActor = NULL;
    this->CurrentCharacterAngle = 0.00f;
    this->TargetCharacterAngle = 0.00f;
    this->CameraType = 0;
}


void AHeroInfoCamera::IncreaseWheelCamera() {
}

void AHeroInfoCamera::DisplayActorInitComplete() {
}

void AHeroInfoCamera::DecreaseWheelCamera() {
}

void AHeroInfoCamera::ChangeSubState(int32 NewSubState) {
}

void AHeroInfoCamera::ChangeMainState(int32 NewMainState) {
}


