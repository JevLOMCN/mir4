#include "MultiLineEditableText.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EWidgetClipping -FallbackName=EWidgetClipping

UMultiLineEditableText::UMultiLineEditableText() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->AutoWrapText = true;
    this->bIsReadOnly = false;
    this->SelectAllTextWhenFocused = false;
    this->ClearTextSelectionOnFocusLoss = true;
    this->RevertTextOnEscape = false;
    this->ClearKeyboardFocusOnCommit = true;
    this->AllowContextMenu = true;
    this->VirtualKeyboardDismissAction = EVirtualKeyboardDismissAction::TextChangeOnDismiss;
}

void UMultiLineEditableText::SetWidgetStyle(const FTextBlockStyle& InWidgetStyle) {
}

void UMultiLineEditableText::SetText(FText InText) {
}

void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly) {
}

void UMultiLineEditableText::SetHintText(FText InHintText) {
}

FText UMultiLineEditableText::GetText() const {
    return FText::GetEmpty();
}

FText UMultiLineEditableText::GetHintText() const {
    return FText::GetEmpty();
}


