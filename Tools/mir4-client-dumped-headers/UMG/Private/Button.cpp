#include "Button.h"

UButton::UButton() {
    this->Style = NULL;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->IsFocusable = true;
    this->DontHandledEvent = false;
}

void UButton::SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod) {
}

void UButton::SetStyle(const FButtonStyle& InStyle) {
}

void UButton::SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod) {
}

void UButton::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UButton::SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod) {
}

void UButton::SetBackgroundColor(FLinearColor InBackgroundColor) {
}

bool UButton::IsPressed() const {
    return false;
}


