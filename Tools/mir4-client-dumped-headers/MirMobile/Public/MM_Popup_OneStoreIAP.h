#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "WidgetBase.h"
#include "MM_Popup_OneStoreIAP.generated.h"

class UMirButton;
class UMirWebBrowser;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_OneStoreIAP : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirWebBrowser* m_WebBrowser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayCloseTimeHandle;
    
public:
    UMM_Popup_OneStoreIAP();

    UFUNCTION(BlueprintCallable)
    void OnUrlChanged(const FText& URL);
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void DelayedCloseWidget();
    
    UFUNCTION(BlueprintCallable)
    void ClearCloseTimeHandle();
    
};

