#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_WebBrowser.generated.h"

class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirWebBrowser;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_WebBrowser : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Can_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirWebBrowser* m_C_WebBrowser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_Home;
    
public:
    UMM_Popup_WebBrowser();

    UFUNCTION(BlueprintCallable)
    void OnLoadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnClickHome();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

