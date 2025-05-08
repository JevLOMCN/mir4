#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Dominion_TaxDetail.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Dominion_TaxDetail : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* ScrollBox_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_Background;
    
public:
    UMM_Popup_Dominion_TaxDetail();

    UFUNCTION(BlueprintCallable)
    void OnClickWithDrawal();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

