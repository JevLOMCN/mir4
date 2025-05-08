#include "MM_AnimInstance.h"

UMM_AnimInstance::UMM_AnimInstance() {
    this->FSMType = EFSM_TYPE::EFSM_INIT;
    this->SubState = 0;
}

void UMM_AnimInstance::ResetSubState() {
}

void UMM_AnimInstance::ChangeSubState(int32 NewSubState) {
}


