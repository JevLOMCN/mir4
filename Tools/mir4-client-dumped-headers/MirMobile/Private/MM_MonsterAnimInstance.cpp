#include "MM_MonsterAnimInstance.h"

UMM_MonsterAnimInstance::UMM_MonsterAnimInstance() {
    this->MoveRate = 1.00f;
    this->IdleStartPosition = 0.00f;
    this->BattleState = false;
    this->RotDegree = 0.00f;
    this->IsTrace = false;
    this->UseMoveAnimation = false;
    this->CCSTANCE = 0;
    this->AniIndex = 0;
    this->IdleIndex = 0;
    this->StateEelapsedTime = 0;
    this->PlayCustomAnim = false;
    this->CustomAnimIndex = 0;
    this->Monster = NULL;
}


