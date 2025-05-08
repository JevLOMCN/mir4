#include "IGDialogBPL.h"

UIGDialogBPL::UIGDialogBPL() {
}

void UIGDialogBPL::ToggleStatusBar(bool statusBarHidden, TEnumAsByte<StatusBarStyle> StatusBarStyle) {
}

void UIGDialogBPL::ShowTwoButtonsDialog(const FString& Title, const FString& Message, const FString& confirmButtonText, const FString& cancelButtonText, const FOnConfirmButtonClickedDelegate& onConfirmButtonClickedCallback, const FOnCancelButtonClickedDelegate& onCancelButtonClickedCallback) {
}

void UIGDialogBPL::ShowThreeButtonsDialog(const FString& Title, const FString& Message, const FString& firstOptionButtonText, const FString& secondOptionButtonText, const FString& cancelButtonText, const FOnFirstOptionButtonClickedDelegate& onFirstOptionButtonClickedCallback, const FOnSecondOptionButtonClickedDelegate& onSecondOptionButtonClickedCallback, const FOnCancelButtonClickedDelegate& onCancelButtonClickedCallback) {
}

void UIGDialogBPL::ShowSingleButtonDialog(const FString& Title, const FString& Message, const FString& confirmButtonText, const FOnConfirmButtonClickedDelegate& onConfirmButtonClickedCallback) {
}

void UIGDialogBPL::ShowLoadingDialog() {
}

void UIGDialogBPL::ShowInputFieldDialog(const FString& Title, const FString& Text, const FString& inputPlaceholderText, const FString& buttonOkTitle, const FString& buttonCancelTitle, const FOnConfirmInputButtonClickedDelegate& onConfirmInputButtonClickedCallback, const FOnCancelButtonClickedDelegate& onCancelButtonClickedCallback) {
}

void UIGDialogBPL::ShowActionSheetSimpleDialog(const FString& Title, const FString& cancelButtonText, TArray<FString> actionButtonsTexts, int32 posX, int32 posY, const FOnCancelButtonClickedDelegate& onCancelButtonClickedCallback, const FOnActionButtonClickedDelegate& actionButtonCallback) {
}

void UIGDialogBPL::ShowActionSheetComplexDialog(const FString& Title, const FString& cancelButtonText, const FString& destructiveButtonText, TArray<FString> actionButtonsTexts, int32 posX, int32 posY, const FOnCancelButtonClickedDelegate& onCancelButtonClickedCallback, const FOnDestructiveButtonClickedDelegate& onDestructiveButtonClickedCallback, const FOnActionButtonClickedDelegate& actionButtonCallback) {
}

void UIGDialogBPL::DismissLoadingDialog() {
}


