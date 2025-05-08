#include "CheckBox.h"

UCheckBox::UCheckBox() {
    this->CheckedState = ECheckBoxState::Unchecked;
    this->Style = NULL;
    this->UncheckedImage = NULL;
    this->UncheckedHoveredImage = NULL;
    this->UncheckedPressedImage = NULL;
    this->CheckedImage = NULL;
    this->CheckedHoveredImage = NULL;
    this->CheckedPressedImage = NULL;
    this->UndeterminedImage = NULL;
    this->UndeterminedHoveredImage = NULL;
    this->UndeterminedPressedImage = NULL;
    this->HorizontalAlignment = HAlign_Fill;
    this->IsFocusable = true;
}

void UCheckBox::SetIsChecked(bool InIsChecked) {
}

void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState) {
}

bool UCheckBox::IsPressed() const {
    return false;
}

bool UCheckBox::IsChecked() const {
    return false;
}

ECheckBoxState UCheckBox::GetCheckedState() const {
    return ECheckBoxState::Unchecked;
}


