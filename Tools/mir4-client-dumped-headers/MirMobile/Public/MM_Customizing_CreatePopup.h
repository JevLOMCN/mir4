#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Customizing_CreatePopup.generated.h"

class UButton;
class UMM_Common_Btn;
class UMirEditableText;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Customizing_CreatePopup : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_pRandomButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pCancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pDecisionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirEditableText* m_pNameEditableText;
    
    UMM_Customizing_CreatePopup();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCloseAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnClicRandomName();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDecision();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancel();
    
    UFUNCTION(BlueprintCallable)
    void FinishCloseAnimEvent();
    
};

