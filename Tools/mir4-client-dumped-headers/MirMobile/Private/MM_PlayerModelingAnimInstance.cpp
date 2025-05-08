#include "MM_PlayerModelingAnimInstance.h"

UMM_PlayerModelingAnimInstance::UMM_PlayerModelingAnimInstance() {
    this->MainState = 0;
    this->SubState = 0;
    this->Stiffness01 = 0.00f;
    this->Stiffness02 = 0.00f;
    this->Stiffness03 = 0.00f;
    this->Stiffness04 = 0.00f;
    this->Stiffness05 = 0.00f;
    this->Damping01 = 0.00f;
    this->Damping02 = 0.00f;
    this->Damping03 = 0.00f;
    this->Damping04 = 0.00f;
    this->Damping05 = 0.00f;
    this->SpringAlpha = 0.00f;
    this->SpringBlendTime = 1.00f;
    this->PlayerModeling = NULL;
}

void UMM_PlayerModelingAnimInstance::ResetSubState() {
}


