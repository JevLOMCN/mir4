#include "Slider.h"

USlider::USlider() {
    this->Value = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->Orientation = Orient_Horizontal;
    this->IndentHandle = false;
    this->Locked = false;
    this->MouseUsesStep = false;
    this->RequiresControllerLock = true;
    this->StepSize = 0.01f;
    this->IsFocusable = true;
}

void USlider::SetValue(float InValue) {
}

void USlider::SetStepSize(float InValue) {
}

void USlider::SetSliderHandleColor(FLinearColor InValue) {
}

void USlider::SetSliderBarColor(FLinearColor InValue) {
}

void USlider::SetMinValue(float InValue) {
}

void USlider::SetMaxValue(float InValue) {
}

void USlider::SetLocked(bool InValue) {
}

void USlider::SetIndentHandle(bool InValue) {
}

float USlider::GetValue() const {
    return 0.0f;
}

float USlider::GetNormalizedValue() const {
    return 0.0f;
}


