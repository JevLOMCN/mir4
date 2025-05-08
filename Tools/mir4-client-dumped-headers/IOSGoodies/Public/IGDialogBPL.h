#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OnActionButtonClickedDelegateDelegate.h"
#include "OnCancelButtonClickedDelegateDelegate.h"
#include "OnConfirmButtonClickedDelegateDelegate.h"
#include "OnConfirmInputButtonClickedDelegateDelegate.h"
#include "OnDestructiveButtonClickedDelegateDelegate.h"
#include "OnFirstOptionButtonClickedDelegateDelegate.h"
#include "OnSecondOptionButtonClickedDelegateDelegate.h"
#include "StatusBarStyle.h"
#include "IGDialogBPL.generated.h"

UCLASS(Blueprintable)
class IOSGOODIES_API UIGDialogBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGDialogBPL();

    UFUNCTION(BlueprintCallable)
    static void ToggleStatusBar(bool statusBarHidden, TEnumAsByte<StatusBarStyle> StatusBarStyle);
    
    UFUNCTION(BlueprintCallable)
    static void ShowTwoButtonsDialog(const FString& Title, const FString& Message, const FString& confirmButtonText, const FString& cancelButtonText, const FOnConfirmButtonClickedDelegate& onConfirmButtonClickedCallback, const FOnCancelButtonClickedDelegate& onCancelButtonClickedCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowThreeButtonsDialog(const FString& Title, const FString& Message, const FString& firstOptionButtonText, const FString& secondOptionButtonText, const FString& cancelButtonText, const FOnFirstOptionButtonClickedDelegate& onFirstOptionButtonClickedCallback, const FOnSecondOptionButtonClickedDelegate& onSecondOptionButtonClickedCallback, const FOnCancelButtonClickedDelegate& onCancelButtonClickedCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowSingleButtonDialog(const FString& Title, const FString& Message, const FString& confirmButtonText, const FOnConfirmButtonClickedDelegate& onConfirmButtonClickedCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowLoadingDialog();
    
    UFUNCTION(BlueprintCallable)
    static void ShowInputFieldDialog(const FString& Title, const FString& Text, const FString& inputPlaceholderText, const FString& buttonOkTitle, const FString& buttonCancelTitle, const FOnConfirmInputButtonClickedDelegate& onConfirmInputButtonClickedCallback, const FOnCancelButtonClickedDelegate& onCancelButtonClickedCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowActionSheetSimpleDialog(const FString& Title, const FString& cancelButtonText, TArray<FString> actionButtonsTexts, int32 posX, int32 posY, const FOnCancelButtonClickedDelegate& onCancelButtonClickedCallback, const FOnActionButtonClickedDelegate& actionButtonCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowActionSheetComplexDialog(const FString& Title, const FString& cancelButtonText, const FString& destructiveButtonText, TArray<FString> actionButtonsTexts, int32 posX, int32 posY, const FOnCancelButtonClickedDelegate& onCancelButtonClickedCallback, const FOnDestructiveButtonClickedDelegate& onDestructiveButtonClickedCallback, const FOnActionButtonClickedDelegate& actionButtonCallback);
    
    UFUNCTION(BlueprintCallable)
    static void DismissLoadingDialog();
    
};

