#include "EditableTextBox.h"

UEditableTextBox::UEditableTextBox() {
    this->Style = NULL;
    this->IsReadOnly = false;
    this->IsPassword = false;
    this->MinimumDesiredWidth = 0.00f;
    this->IsCaretMovedWhenGainFocus = true;
    this->SelectAllTextWhenFocused = false;
    this->RevertTextOnEscape = false;
    this->ClearKeyboardFocusOnCommit = true;
    this->SelectAllTextOnCommit = false;
    this->AllowContextMenu = true;
    this->KeyboardType = EVirtualKeyboardType::Default;
    this->VirtualKeyboardDismissAction = EVirtualKeyboardDismissAction::TextChangeOnDismiss;
    this->Justification = ETextJustify::Left;
}

void UEditableTextBox::SetText(FText InText) {
}

void UEditableTextBox::SetJustification(TEnumAsByte<ETextJustify::Type> InJustification) {
}

void UEditableTextBox::SetIsReadOnly(bool bReadOnly) {
}

void UEditableTextBox::SetIsPassword(bool bIsPassword) {
}

void UEditableTextBox::SetHintText(FText InText) {
}

void UEditableTextBox::SetError(FText InError) {
}

bool UEditableTextBox::HasError() const {
    return false;
}

FText UEditableTextBox::GetText() const {
    return FText::GetEmpty();
}

void UEditableTextBox::ClearError() {
}


