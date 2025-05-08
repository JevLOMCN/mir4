#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "WidgetBase.h"
#include "MM_Popup_GuestContinue.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirEditableText;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_GuestContinue : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_LoadAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirEditableText* m_Edit_Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirEditableText* m_Edit_Password;
    
public:
    UMM_Popup_GuestContinue();

    UFUNCTION(BlueprintCallable)
    void OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_);
    
    UFUNCTION(BlueprintCallable)
    void OnGuestRestoreComplete(const bool Success, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnCommitEditPassword(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnCommitEditCode(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnClickLoadAccount();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

