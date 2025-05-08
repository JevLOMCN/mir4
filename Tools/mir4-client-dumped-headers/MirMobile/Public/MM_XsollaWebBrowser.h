#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_XsollaWebBrowser.generated.h"

class UMM_Common_Btn_Symbol;
class UMirWebBrowser;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_XsollaWebBrowser : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Panel_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirWebBrowser* m_Web_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
public:
    UMM_XsollaWebBrowser();

    UFUNCTION(BlueprintCallable)
    void OnUrlChanged(const FText& URL);
    
    UFUNCTION(BlueprintCallable)
    void OnSocialAuthUrlReceived(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void OnSocialAuthError(const FString& code, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    void OnClickUserCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnBeforePopup(const FString& URL, const FString& Frame);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLoadError();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLoadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void ClearCache();
    
};

