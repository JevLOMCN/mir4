#include "PetRenderRoom.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

APetRenderRoom::APetRenderRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_pSceneComponent = (USceneComponent*)RootComponent;
    this->m_pPetPivot = CreateDefaultSubobject<USceneComponent>(TEXT("PivotComponent"));
    this->m_pMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PetMesh"));
    this->m_pUIBackGroundActor = NULL;
    this->m_pPetCameraData = NULL;
    this->m_pAnimInstance = NULL;
    this->m_pMontage = NULL;
    this->m_pMeshObjcet = NULL;
    this->m_pAnimObjcet = NULL;
    this->m_pPetPivot->SetupAttachment(RootComponent);
    this->m_pMesh->SetupAttachment(m_pPetPivot);
}


void APetRenderRoom::ShowSkeletalMesh() {
}



void APetRenderRoom::SetPetScale(float PetScale) {
}

void APetRenderRoom::SetPetPlacement(FVector PetLoc, FRotator PetRot) {
}

void APetRenderRoom::SetLoadedMesh() {
}


void APetRenderRoom::SetCameraFOV(float CameraFov) {
}



int32 APetRenderRoom::GetSelectedPetID() {
    return 0;
}


