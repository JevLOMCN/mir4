#include "MM_NonePlayerAnimInstance.h"

UMM_NonePlayerAnimInstance::UMM_NonePlayerAnimInstance() {
    this->LimitTime = 0.00f;
    this->ElapsedTime = 0.00f;
    this->MinValue = 0;
    this->MaxValue = 0;
    this->ReferenceValue = 0;
    this->DefaultGesture = true;
    this->AirwalkState = EAIRWALK_STATE::AIR_NONE;
    this->CustomAnimIndex = 0;
    this->PlayCustomAnim = false;
    this->PlayStdElapsedTime = 0.00f;
    this->PlayStdTime = 4.00f;
    this->PlayStd01Rate = 0.30f;
    this->PlayStd02Rate = 0.30f;
    this->bPlayDefaultStd = true;
    this->Entity = NULL;
}


