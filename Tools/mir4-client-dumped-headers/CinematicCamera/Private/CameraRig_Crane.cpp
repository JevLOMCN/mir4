#include "CameraRig_Crane.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ACameraRig_Crane::ACameraRig_Crane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent"));
    this->CranePitch = 0.00f;
    this->CraneYaw = 0.00f;
    this->CraneArmLength = 500.00f;
    this->bLockMountPitch = false;
    this->bLockMountYaw = false;
    this->TransformComponent = (USceneComponent*)RootComponent;
    this->CraneYawControl = CreateDefaultSubobject<USceneComponent>(TEXT("CraneYawControl"));
    this->CranePitchControl = CreateDefaultSubobject<USceneComponent>(TEXT("CranePitchControl"));
    this->CraneCameraMount = CreateDefaultSubobject<USceneComponent>(TEXT("CraneCameraMount"));
    this->CraneYawControl->SetupAttachment(RootComponent);
    this->CranePitchControl->SetupAttachment(CraneYawControl);
    this->CraneCameraMount->SetupAttachment(CranePitchControl);
}


