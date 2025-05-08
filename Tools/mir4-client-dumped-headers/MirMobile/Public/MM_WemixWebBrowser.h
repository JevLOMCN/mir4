#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_WemixWebBrowser.generated.h"

class UMM_Common_Btn_Symbol;
class UMirWebBrowser;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_WemixWebBrowser : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_WemixAuth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DracoContractAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CharacterContractAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString HydraContractAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString MirageContractAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BaseItemURI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Panel_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirWebBrowser* m_Web_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
public:
    UMM_WemixWebBrowser();

    UFUNCTION(BlueprintCallable)
    void OnUrlChanged(const FText& URL);
    
    UFUNCTION(BlueprintCallable)
    void OnClickUserCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickConnectWemixWallet();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancelConnectWemixWallet();
    
    UFUNCTION(BlueprintCallable)
    void OnBeforePopup(const FString& URL, const FString& Frame);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLoadError();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLoadCompleted();
    
};

