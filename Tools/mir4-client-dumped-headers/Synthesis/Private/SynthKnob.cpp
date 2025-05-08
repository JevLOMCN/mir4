#include "SynthKnob.h"

USynthKnob::USynthKnob() {
    this->Value = 0.00f;
    this->StepSize = 0.01f;
    this->MouseSpeed = 1.00f;
    this->MouseFineTuneSpeed = 0.20f;
    this->ShowTooltipInfo = false;
    this->Locked = false;
    this->IsFocusable = true;
}

void USynthKnob::SetValue(float InValue) {
}

void USynthKnob::SetStepSize(float InValue) {
}

void USynthKnob::SetLocked(bool InValue) {
}

float USynthKnob::GetValue() const {
    return 0.0f;
}


