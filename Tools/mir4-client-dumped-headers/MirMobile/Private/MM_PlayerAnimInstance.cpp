#include "MM_PlayerAnimInstance.h"

UMM_PlayerAnimInstance::UMM_PlayerAnimInstance() {
    this->MoveBlendSpeed = 0.00f;
    this->MoveRate = 1.00f;
    this->BattleState = false;
    this->RideState = ERideState::None;
    this->VehicleType = 0;
    this->SideWalkDir = 0.00f;
    this->IsStandJump = false;
    this->SkillID = 0;
    this->CCSTANCE = 0;
    this->AniIndex = 0;
    this->OpObjectType = 0;
    this->AirwalkState = EAIRWALK_STATE::AIR_NONE;
    this->IsHit = false;
    this->bNewWallJumpStart = false;
    this->DashCameraBlurCurve = NULL;
    this->Jump02Curve = NULL;
    this->Player = NULL;
}

void UMM_PlayerAnimInstance::StartWallJump() {
}

void UMM_PlayerAnimInstance::SetStandLand(bool IsStandLand) {
}

bool UMM_PlayerAnimInstance::NotAirwalkState(EAIRWALK_STATE AirState) {
    return false;
}

bool UMM_PlayerAnimInstance::IsDashState() {
    return false;
}

bool UMM_PlayerAnimInstance::IsAirwalkState(EAIRWALK_STATE AirState) {
    return false;
}


