#include "MM_EntityBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "MM_BuffComponent.h"
#include "MM_CharacterPartsComponent.h"

AMM_EntityBase::AMM_EntityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->CapsuleRadius = 50.00f;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->BuffComponent = CreateDefaultSubobject<UMM_BuffComponent>(TEXT("BuffComponent"));
    this->m_UID = 0;
    this->TID = 0;
    this->TargetDecal = NULL;
    this->TargetDecalActor = NULL;
    this->MainTargetDecalActor = NULL;
    this->m_pPartsComponent = CreateDefaultSubobject<UMM_CharacterPartsComponent>(TEXT("PartsComponent"));
    this->MergedMeshComponent = NULL;
    this->m_SubState = 0;
    this->m_PreSubState = 0;
    this->m_CurrentFSM = EFSM_TYPE::EFSM_NONE;
    this->PreFSM = EFSM_TYPE::EFSM_NONE;
}

void AMM_EntityBase::InitLoadComplete() {
}

int32 AMM_EntityBase::GetSubState() {
    return 0;
}

EFSM_TYPE AMM_EntityBase::GetPreFSM() {
    return EFSM_TYPE::EFSM_NONE;
}

USkeletalMeshComponent* AMM_EntityBase::GetMesh() {
    return NULL;
}

EFSM_TYPE AMM_EntityBase::GetCurrentFSM() {
    return EFSM_TYPE::EFSM_NONE;
}

UMM_AnimInstance* AMM_EntityBase::GetAnimInstance() {
    return NULL;
}

void AMM_EntityBase::ChangeSubState(int32 NewSubState) {
}

void AMM_EntityBase::ChangeCurrentFSM(EFSM_TYPE NewFSM) {
}


