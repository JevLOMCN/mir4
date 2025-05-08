#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_GachaPercent.generated.h"

class UMM_Common_Btn_Symbol;
class UMirWebBrowser;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_GachaPercent : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirWebBrowser* mWebBrowser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* mBtnClose;
    
public:
    UMM_Popup_GachaPercent();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

