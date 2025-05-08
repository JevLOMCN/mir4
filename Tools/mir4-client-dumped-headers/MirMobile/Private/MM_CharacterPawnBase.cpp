#include "MM_CharacterPawnBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "MM_CrowdControlComponent.h"
#include "MM_ExecuteDecalComponent.h"
#include "MM_FSMComponent.h"
#include "MM_PawnMovementComponent.h"
#include "MirWidgetComponent.h"

AMM_CharacterPawnBase::AMM_CharacterPawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsDesiredRoator = false;
    this->TotalDesiredElapsedTime = 0.00f;
    this->SumDesiredElapsedTime = 0.00f;
    this->BeamParticleSystemComponent = NULL;
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->m_MovementComponent = CreateDefaultSubobject<UMM_PawnMovementComponent>(TEXT("PawnMovementComponent"));
    this->m_bMultiTarget = false;
    this->WidgetComp = CreateDefaultSubobject<UMirWidgetComponent>(TEXT("WidgetComponent"));
    this->WidgetComp_2D = CreateDefaultSubobject<UMirWidgetComponent>(TEXT("WidgetComponent_2D"));
    this->DetectRange = 1500.00f;
    this->AutoBattleShortRange = 1500.00f;
    this->AutoBattleMidRange = 5000.00f;
    this->ShakeTime = 0.10f;
    this->ShakeAngle = 50.00f;
    this->WalkSpeed = 100.00f;
    this->RunSpeed = 500.00f;
    this->CliffMoveSpeed = 200.00f;
    this->m_fConstFlashTime = 0.15f;
    this->m_pBalloonUI = NULL;
    this->FSMComp = CreateDefaultSubobject<UMM_FSMComponent>(TEXT("FSMComponent"));
    this->m_pTarget = NULL;
    this->m_pCharPointLight = NULL;
    this->m_pCCComponent = CreateDefaultSubobject<UMM_CrowdControlComponent>(TEXT("CCComponent"));
    this->ExecuteDecalComponent = CreateDefaultSubobject<UMM_ExecuteDecalComponent>(TEXT("ExecuteDecalComponent"));
    this->m_MoveRate = 1.00f;
    this->m_SpeedAniRate = 1.00f;
    this->WidgetComp->SetupAttachment(RootComponent);
    this->WidgetComp_2D->SetupAttachment(WidgetComp);
    this->BodyMesh->SetupAttachment(RootComponent);
}

void AMM_CharacterPawnBase::SetCharPointLight(UPointLightComponent* pointLightComp) {
}

void AMM_CharacterPawnBase::OnFinishedBeam(UParticleSystemComponent* FinishedComponent) {
}

void AMM_CharacterPawnBase::OnClearAttackEmissive() {
}

float AMM_CharacterPawnBase::K2_GetPercent_HP() {
    return 0.0f;
}

UMM_FSMComponent* AMM_CharacterPawnBase::GetFSMComponent() {
    return NULL;
}


