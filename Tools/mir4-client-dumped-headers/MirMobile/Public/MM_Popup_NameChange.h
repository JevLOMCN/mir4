#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_NameChange.generated.h"

class UButton;
class UMM_Common_Btn;
class UMM_Common_Btn_Cost;
class UMM_Common_Btn_Symbol;
class UMirEditableText;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Popup_NameChange : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pRandomButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pCancelBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pCancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_pDecisionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirEditableText* m_pNameEditableText;
    
    UMM_Popup_NameChange();

    UFUNCTION(BlueprintCallable)
    void OnClicRandomName();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSendNickName();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDecision();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancel();
    
};

