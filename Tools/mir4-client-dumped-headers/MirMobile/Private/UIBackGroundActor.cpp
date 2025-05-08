#include "UIBackGroundActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AUIBackGroundActor::AUIBackGroundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->m_bUpdate = true;
    this->m_bMoveComponent = true;
    this->SceneCaptureComponent2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
    this->m_pRenderTarget2D = NULL;
    this->RenderTargetMaterial = NULL;
    this->UIBackGroundActor = NULL;
    this->BackgroundDynamicInst = NULL;
    this->SceneCaptureTableReferences = NULL;
    this->UpdateSpeed = 6.00f;
    this->UpdateSpeed_MAX = 0.20f;
    this->PrevCameraPitch = 0.00f;
    this->PrevCameraFOV = 0.00f;
    this->DestCameraPitch = 0.00f;
    this->CalculateDestCameraFOV = 0.00f;
    this->DestCameraFOV = 0.00f;
    this->IsPendingUpdate = 0;
    this->m_PrevCamera = NULL;
    this->SceneCaptureComponent2D->SetupAttachment(RootComponent);
}

void AUIBackGroundActor::SetTestFOV(float TestFOV) {
}

void AUIBackGroundActor::SetSceneCaptureTargetImage(UImage* TargetImage, UImage* TargetPos) {
}

void AUIBackGroundActor::RemoveSceneCaptureActor(AActor* AddActor) {
}

void AUIBackGroundActor::GetSceneCapturePosition(const FString& PositionName, FVector& OutLocation, FRotator& OutRotator) {
}


void AUIBackGroundActor::AddSceneCaptureActor(AActor* AddActor) {
}


