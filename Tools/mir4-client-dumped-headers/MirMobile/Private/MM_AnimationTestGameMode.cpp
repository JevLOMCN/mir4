#include "MM_AnimationTestGameMode.h"

AMM_AnimationTestGameMode::AMM_AnimationTestGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pNPCAnimInstance = NULL;
}

void AMM_AnimationTestGameMode::SetVehicleInfo(int32 VehicleId, int32 VehicleType) {
}

void AMM_AnimationTestGameMode::SetCCStance(ACharacter* pCharacter, int32 CCSTANCE) {
}

void AMM_AnimationTestGameMode::SetAniIndex(ACharacter* pCharacter, int32 AnimID) {
}

EFSM_TYPE AMM_AnimationTestGameMode::GetFSMState(ACharacter* pCharacter) {
    return EFSM_TYPE::EFSM_NONE;
}

void AMM_AnimationTestGameMode::ChangeTestMode(bool bPC) {
}

void AMM_AnimationTestGameMode::ChangeCharacter(int32 ClassID) {
}

void AMM_AnimationTestGameMode::ChangeBaseFSM(ACharacter* pCharacter, EFSM_TYPE FsmState) {
}

void AMM_AnimationTestGameMode::BeginTestGameMode(int32 ClassID) {
}


