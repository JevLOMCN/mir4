#include "MM_GachaInteractionObjectActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AMM_GachaInteractionObjectActor::AMM_GachaInteractionObjectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TestGacha = EGachaBoxType::NONE;
    this->TestGachaResult = EGachaResultType::PET;
    this->TestItemID = 0;
    this->m_pPetCameraData = NULL;
    this->GachaMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GachaMesh"));
    this->ResultMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ResultMesh"));
    this->DefaultParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DefaultParticle"));
    this->InteractionParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("InteractionParticle"));
    this->GachaDirectingData = NULL;
    this->m_pIdleAnimation = NULL;
    this->m_pOpenAnimation = NULL;
    this->m_pEndAnimation = NULL;
    this->GachaManagerActor = NULL;
    this->m_pInteractionEffect = NULL;
    this->m_pInteractionOpenEffect = NULL;
    this->m_pInteractionMaterialEffect = NULL;
    this->m_pResultAnimation = NULL;
    this->m_ParticleSystemComponent = NULL;
    this->GachaMeshComponent->SetupAttachment(RootComponent);
    this->ResultMeshComponent->SetupAttachment(RootComponent);
    this->DefaultParticleComponent->SetupAttachment(RootComponent);
    this->InteractionParticleComponent->SetupAttachment(RootComponent);
}

void AMM_GachaInteractionObjectActor::TestGachaSetting() {
}




void AMM_GachaInteractionObjectActor::SetResultInfo() {
}





void AMM_GachaInteractionObjectActor::OnTouchStartPosition(FVector2D StartPosition) {
}

void AMM_GachaInteractionObjectActor::OnTouchReleased() {
}

void AMM_GachaInteractionObjectActor::OnTouchDragPosition(FVector2D DragPosition) {
}

void AMM_GachaInteractionObjectActor::FinishSequence() {
}


