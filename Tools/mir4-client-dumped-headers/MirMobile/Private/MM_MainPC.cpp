#include "MM_MainPC.h"
#include "MM_GhostTrailComponent.h"
#include "MM_GuideDecalComponent.h"

AMM_MainPC::AMM_MainPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pPlayerController = NULL;
    this->m_pRefVehicleMesh = NULL;
    this->m_pRefVehicleAnimBP = NULL;
    this->m_TargetLockOnEffect = NULL;
    this->m_pSharedTargetEffect = NULL;
    this->NearAttackRange = 240.00f;
    this->m_pAutoBehaviorAIController = NULL;
    this->isWallOverlap = false;
    this->m_GhostComponet = CreateDefaultSubobject<UMM_GhostTrailComponent>(TEXT("GhostComponet"));
    this->GuideDecalComponent = CreateDefaultSubobject<UMM_GuideDecalComponent>(TEXT("GuideDecalComponent"));
    this->SubTargetLineEffect = NULL;
    this->MainTargetLineEffect = NULL;
    this->OldAutoMoveState = EAutoMoveState::None;
    this->CurrentAutoMoveState = EAutoMoveState::None;
    this->OldBehaviorType = EBehaviorType::Default;
    this->BehaviorType = EBehaviorType::Default;
    this->DarkTime = 2.00f;
    this->DarkCurve = NULL;
}

void AMM_MainPC::ReserveAutoMoveCheck() {
}

void AMM_MainPC::OverlapWall() {
}

void AMM_MainPC::OnLinkProxyPathEntry() {
}

void AMM_MainPC::OnAutoMoveFinished() {
}

bool AMM_MainPC::K2_UpdateCenterLocation() {
    return false;
}

void AMM_MainPC::K2_SkillAttack() {
}

void AMM_MainPC::K2_SetBehaviorType(EBehaviorType NewBehaviorType) {
}

void AMM_MainPC::K2_SetAutoState(EAutoBattleState NewState) {
}

bool AMM_MainPC::K2_ReturnToCenter(bool Force) {
    return false;
}

void AMM_MainPC::K2_NormalAttack() {
}

bool AMM_MainPC::K2_IsOutOfQuestCompleteCoordRange() {
    return false;
}

bool AMM_MainPC::K2_AutoBehaviorFindTargetOnAround() {
    return false;
}

bool AMM_MainPC::K2_AutoBehaviorFindTargetInEnemies() {
    return false;
}

bool AMM_MainPC::K2_AutoBehaviorFindTargetByQuest() {
    return false;
}

bool AMM_MainPC::K2_AutoBehaviorFindGatherObject() {
    return false;
}

void AMM_MainPC::HitWall(FHitResult HitResult) {
}




