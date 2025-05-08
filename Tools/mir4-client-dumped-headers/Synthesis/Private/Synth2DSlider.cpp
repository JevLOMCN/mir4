#include "Synth2DSlider.h"

USynth2DSlider::USynth2DSlider() {
    this->ValueX = 0.00f;
    this->ValueY = 0.00f;
    this->IndentHandle = false;
    this->Locked = false;
    this->StepSize = 0.01f;
    this->IsFocusable = true;
}

void USynth2DSlider::SetValue(FVector2D InValue) {
}

void USynth2DSlider::SetStepSize(float InValue) {
}

void USynth2DSlider::SetSliderHandleColor(FLinearColor InValue) {
}

void USynth2DSlider::SetLocked(bool InValue) {
}

void USynth2DSlider::SetIndentHandle(bool InValue) {
}

FVector2D USynth2DSlider::GetValue() const {
    return FVector2D{};
}


