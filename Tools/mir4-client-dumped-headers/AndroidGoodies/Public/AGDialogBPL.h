#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DialogTheme.h"
#include "OnDialogCancelledDelegateDelegate.h"
#include "OnListItemChoosedDelegateDelegate.h"
#include "OnMultiChoiceItemClickDelegateDelegate.h"
#include "OnNegativeButtonClickedDelegateDelegate.h"
#include "OnNeutralButtonClickedDelegateDelegate.h"
#include "OnPositiveButtonClickedDelegateDelegate.h"
#include "OnSingleChoiceItemClickDelegateDelegate.h"
#include "AGDialogBPL.generated.h"

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGDialogBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGDialogBPL();

    UFUNCTION(BlueprintCallable)
    static void ShowTwoButtonsDialog(const FString& messageTitle, const FString& Message, const FString& PositiveButtonText, const FString& NegativeButtonText, const FOnPositiveButtonClickedDelegate& onPositiveButtonClickedCallback, const FOnNegativeButtonClickedDelegate& onNegativeButtonClickedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme);
    
    UFUNCTION(BlueprintCallable)
    static void ShowThreeButtonsDialog(const FString& messageTitle, const FString& Message, const FString& PositiveButtonText, const FString& NegativeButtonText, const FString& NeutralButtonText, const FOnPositiveButtonClickedDelegate& onPositiveButtonClickedCallback, const FOnNegativeButtonClickedDelegate& onNegativeButtonClickedCallback, const FOnNeutralButtonClickedDelegate& onNeutralButtonClickedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme);
    
    UFUNCTION(BlueprintCallable)
    static void ShowSingleItemChoiceDialog(const FString& listTitle, TArray<FString> listItems, const FString& PositiveButtonText, int32 selectedItemIndex, const FOnSingleChoiceItemClickDelegate& onSingleChoiceItemClickedCallback, const FOnPositiveButtonClickedDelegate& onPositiveButtonClickedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme);
    
    UFUNCTION(BlueprintCallable)
    static void ShowSingleButtonDialog(const FString& messageTitle, const FString& Message, const FString& PositiveButtonText, const FOnPositiveButtonClickedDelegate& onPositiveButtonClickedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme);
    
    UFUNCTION(BlueprintCallable)
    static void ShowMultipleItemChoiceDialog(const FString& listTitle, TArray<FString> listItems, const FString& PositiveButtonText, TArray<bool> checkedListItems, const FOnMultiChoiceItemClickDelegate& onMultipleChoiceItemClickedCallback, const FOnPositiveButtonClickedDelegate& onPositiveButtonClickedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme);
    
    UFUNCTION(BlueprintCallable)
    static void ShowChooserDialog(const FString& listTitle, TArray<FString> listItems, const FOnListItemChoosedDelegate& onItemChoosedCallback, const FOnDialogCancelledDelegate& onDialogCancelledCallback, TEnumAsByte<DialogTheme> Theme);
    
};

