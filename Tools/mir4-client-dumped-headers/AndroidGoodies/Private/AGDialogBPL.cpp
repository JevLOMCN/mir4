#include "AGDialogBPL.h"

UAGDialogBPL::UAGDialogBPL() {
}

void UAGDialogBPL::ShowTwoButtonsDialog(const FString& messageTitle, const FString& Message, const FString& PositiveButtonText, const FString& NegativeButtonText, const FOnPositiveButtonClickedDelegate& onPositiveButtonClickedCallback, const FOnNegativeButtonClickedDelegate& onNegativeButtonClickedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme) {
}

void UAGDialogBPL::ShowThreeButtonsDialog(const FString& messageTitle, const FString& Message, const FString& PositiveButtonText, const FString& NegativeButtonText, const FString& NeutralButtonText, const FOnPositiveButtonClickedDelegate& onPositiveButtonClickedCallback, const FOnNegativeButtonClickedDelegate& onNegativeButtonClickedCallback, const FOnNeutralButtonClickedDelegate& onNeutralButtonClickedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme) {
}

void UAGDialogBPL::ShowSingleItemChoiceDialog(const FString& listTitle, TArray<FString> listItems, const FString& PositiveButtonText, int32 selectedItemIndex, const FOnSingleChoiceItemClickDelegate& onSingleChoiceItemClickedCallback, const FOnPositiveButtonClickedDelegate& onPositiveButtonClickedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme) {
}

void UAGDialogBPL::ShowSingleButtonDialog(const FString& messageTitle, const FString& Message, const FString& PositiveButtonText, const FOnPositiveButtonClickedDelegate& onPositiveButtonClickedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme) {
}

void UAGDialogBPL::ShowMultipleItemChoiceDialog(const FString& listTitle, TArray<FString> listItems, const FString& PositiveButtonText, TArray<bool> checkedListItems, const FOnMultiChoiceItemClickDelegate& onMultipleChoiceItemClickedCallback, const FOnPositiveButtonClickedDelegate& onPositiveButtonClickedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme) {
}

void UAGDialogBPL::ShowChooserDialog(const FString& listTitle, TArray<FString> listItems, const FOnListItemChoosedDelegate& onItemChoosedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme) {
}


