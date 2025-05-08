#include "MM_HQPlayerReferenceActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "MM_CharacterPartsComponent.h"

AMM_HQPlayerReferenceActor::AMM_HQPlayerReferenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->m_pMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->m_pPartsComponent = CreateDefaultSubobject<UMM_CharacterPartsComponent>(TEXT("PartsComponent"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->m_pMesh->SetupAttachment(RootComponent);
}

void AMM_HQPlayerReferenceActor::InitLoadComplete() {
}

void AMM_HQPlayerReferenceActor::ChangeMeshComplete() {
}


