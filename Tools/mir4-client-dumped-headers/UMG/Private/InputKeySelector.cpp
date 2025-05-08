#include "InputKeySelector.h"

UInputKeySelector::UInputKeySelector() {
    this->KeySelectionText = FText::FromString(TEXT("..."));
    this->NoKeySpecifiedText = FText::FromString(TEXT("Empty"));
    this->bAllowModifierKeys = true;
    this->bAllowGamepadKeys = false;
    this->EscapeKeys.AddDefaulted(1);
}

void UInputKeySelector::SetTextBlockVisibility(const ESlateVisibility InVisibility) {
}

void UInputKeySelector::SetSelectedKey(const FInputChord& InSelectedKey) {
}

void UInputKeySelector::SetNoKeySpecifiedText(FText InNoKeySpecifiedText) {
}

void UInputKeySelector::SetKeySelectionText(FText InKeySelectionText) {
}

void UInputKeySelector::SetEscapeKeys(const TArray<FKey>& InKeys) {
}

void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys) {
}

void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys) {
}

bool UInputKeySelector::GetIsSelectingKey() const {
    return false;
}


