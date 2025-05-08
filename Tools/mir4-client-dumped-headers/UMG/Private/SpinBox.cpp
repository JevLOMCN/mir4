#include "SpinBox.h"

USpinBox::USpinBox() {
    this->Value = 0.00f;
    this->Style = NULL;
    this->Delta = 0.00f;
    this->SliderExponent = 1.00f;
    this->Justification = ETextJustify::Left;
    this->MinDesiredWidth = 0.00f;
    this->ClearKeyboardFocusOnCommit = false;
    this->SelectAllTextOnCommit = true;
    this->bOverride_MinValue = false;
    this->bOverride_MaxValue = false;
    this->bOverride_MinSliderValue = false;
    this->bOverride_MaxSliderValue = false;
    this->MinValue = 0.00f;
    this->MaxValue = 10.00f;
    this->MinSliderValue = 0.00f;
    this->MaxSliderValue = 0.00f;
}

void USpinBox::SetValue(float NewValue) {
}

void USpinBox::SetMinValue(float NewValue) {
}

void USpinBox::SetMinSliderValue(float NewValue) {
}

void USpinBox::SetMaxValue(float NewValue) {
}

void USpinBox::SetMaxSliderValue(float NewValue) {
}

void USpinBox::SetForegroundColor(FSlateColor InForegroundColor) {
}

float USpinBox::GetValue() const {
    return 0.0f;
}

float USpinBox::GetMinValue() const {
    return 0.0f;
}

float USpinBox::GetMinSliderValue() const {
    return 0.0f;
}

float USpinBox::GetMaxValue() const {
    return 0.0f;
}

float USpinBox::GetMaxSliderValue() const {
    return 0.0f;
}

void USpinBox::ClearMinValue() {
}

void USpinBox::ClearMinSliderValue() {
}

void USpinBox::ClearMaxValue() {
}

void USpinBox::ClearMaxSliderValue() {
}


