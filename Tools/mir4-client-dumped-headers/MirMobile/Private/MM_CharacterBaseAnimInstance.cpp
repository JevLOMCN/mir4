#include "MM_CharacterBaseAnimInstance.h"

UMM_CharacterBaseAnimInstance::UMM_CharacterBaseAnimInstance() {
    this->IdleStartPosition = 0.00f;
    this->FSMType = EFSM_TYPE::EFSM_NONE;
    this->BattleState = false;
    this->SkillID = 0;
    this->CCSTANCE = 0;
    this->AniIndex = 0;
    this->OpObjectType = 0;
    this->AirwalkState = EAIRWALK_STATE::AIR_NONE;
    this->IsStandJump = false;
    this->HangOnDir = 0;
    this->SideWalkDir = 0.00f;
    this->RotDegree = 0.00f;
    this->MoveBlendSpeed = 0.00f;
    this->MoveRate = 1.00f;
    this->IdleIndex = 0;
    this->IsRideStart = false;
    this->IsRide = false;
    this->VehicleType = 0;
    this->IsTrace = true;
    this->CharacterBase = NULL;
}

void UMM_CharacterBaseAnimInstance::StandJump() {
}

void UMM_CharacterBaseAnimInstance::ResetIdle() {
}

bool UMM_CharacterBaseAnimInstance::IsChangeState_IdleToAttack() const {
    return false;
}

bool UMM_CharacterBaseAnimInstance::IsChangeState_AttackToIdle() const {
    return false;
}

void UMM_CharacterBaseAnimInstance::ForwardJump() {
}

void UMM_CharacterBaseAnimInstance::EndWallJumpReady() {
}

void UMM_CharacterBaseAnimInstance::EndRideStartAnim() {
}


