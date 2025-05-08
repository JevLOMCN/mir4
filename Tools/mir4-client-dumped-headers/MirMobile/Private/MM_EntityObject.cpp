#include "MM_EntityObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AMM_EntityObject::AMM_EntityObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->CapsuleRadius = 50.00f;
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->m_CurrentFSM = EFSM_TYPE::EFSM_NONE;
    this->BodyMesh->SetupAttachment(RootComponent);
}

EFSM_TYPE AMM_EntityObject::GetCurrentFSM() {
    return EFSM_TYPE::EFSM_NONE;
}

void AMM_EntityObject::ChangeCurrentFSM(EFSM_TYPE NewFSM) {
}


