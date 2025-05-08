#include "MM_MonsterAIController.h"

AMM_MonsterAIController::AMM_MonsterAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Monster = NULL;
    this->LastAttackType = EMonsterAttackType::None;
    this->CurrentShortSkillSetIndex = -1;
    this->HasShortSkills = false;
    this->CurrentLongSkillSetIndex = -1;
    this->HasLongSkills = false;
    this->EnoughAttackToUseSkill = false;
    this->PickupedNormalAttackCount = 0;
    this->NormalAttackCount = 0;
    this->CurAttackTID = 0;
}

int32 AMM_MonsterAIController::SetShortAttackID(int32 nIdx) {
    return 0;
}

bool AMM_MonsterAIController::SetLongAttackRate(int32 idx) {
    return false;
}

int32 AMM_MonsterAIController::SetLongAttackID(int32 nIdx) {
    return 0;
}

bool AMM_MonsterAIController::SetAttackRate(int32 idx) {
    return false;
}

void AMM_MonsterAIController::SearchTargetMonster(int32 nTID) {
}

bool AMM_MonsterAIController::ReturnToHome() {
    return false;
}

void AMM_MonsterAIController::K2_UpdateNearfieldAttack() {
}

bool AMM_MonsterAIController::IsExcessAttackCoolTime() {
    return false;
}


