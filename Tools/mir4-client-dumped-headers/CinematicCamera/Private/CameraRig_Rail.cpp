#include "CameraRig_Rail.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ACameraRig_Rail::ACameraRig_Rail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent"));
    this->CurrentPositionOnRail = 0.00f;
    this->bLockOrientationToRail = false;
    this->TransformComponent = (USceneComponent*)RootComponent;
    this->RailSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("RailSplineComponent"));
    this->RailCameraMount = CreateDefaultSubobject<USceneComponent>(TEXT("RailCameraMount"));
    this->RailSplineComponent->SetupAttachment(RootComponent);
    this->RailCameraMount->SetupAttachment(RailSplineComponent);
}

USplineComponent* ACameraRig_Rail::GetRailSplineComponent() {
    return NULL;
}


