#include "MM_PC.h"

AMM_PC::AMM_PC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pVehicle = NULL;
    this->m_VehicleCapsuleHeight = 0.00f;
    this->m_DefaultCapsuleHeight = 0.00f;
    this->CameraControl = NULL;
    this->m_pPetObject = NULL;
    this->NormalAttackButtonCheckTime = 0.15f;
    this->ChargingStartDelayTime = 0.50f;
    this->NormalAttackInitTime = 3.00f;
    this->m_AutoRideDistance = 5000.00f;
    this->m_AutoRideStepTime = 5.00f;
    this->m_HangOnTime = 1.00f;
    this->m_WallCheckAngle = 30.00f;
    this->m_WallCheckDistance = 100.00f;
    this->m_LandCheckDistance = 100.00f;
    this->m_FlySpeed = 1000.00f;
    this->m_FlyDownSpeed = 100.00f;
    this->m_FallMoveSpeed = 600.00f;
    this->m_LandAnimationTime = 1.00f;
    this->m_FastRunControlTime = 3.00f;
    this->CameraShakeClass01 = NULL;
    this->CameraShakeClass02 = NULL;
    this->m_RideState = ERideState::None;
    this->IsHitState = false;
    this->m_ServerUID = 0;
    this->ChangeBattleStateTime = 5.00f;
    this->m_IsStandJump = false;
    this->m_IsStandLand = false;
    this->m_SideWalkDir = 0.00f;
    this->m_pNameTag = NULL;
    this->m_AccountGrade = 0;
}

bool AMM_PC::IsBattleState() {
    return false;
}

AHeroInfoCamera* AMM_PC::GetHeroCamera() {
    return NULL;
}

ALobbyCameraControl* AMM_PC::GetCameraControl() {
    return NULL;
}

void AMM_PC::ClearHitState() {
}


