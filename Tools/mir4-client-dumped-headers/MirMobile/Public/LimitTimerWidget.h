#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "LimitTimerWidget.generated.h"

class UEffectWidgetBase;
class UImage;
class UMM_Common_Popup_Outgame;
class UMirButton;
class UMirCanvasPanel;
class UMirTextBlock;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ULimitTimerWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* txtLimitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* txtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btnExtend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btnExtend2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* imgExtend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Popup_Outgame* m_pOutgamePopupExtendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* canAutoExtending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectWidgetBase* eftAutoExtendWgt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txtAutoExtendCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* btnAutoExtending;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* StartWarnAni;
    
    ULimitTimerWidget();

    UFUNCTION(BlueprintCallable)
    void ShowAutoExtendPopup();
    
    UFUNCTION(BlueprintCallable)
    void ShowAuthPopup();
    
    UFUNCTION(BlueprintCallable)
    void OnClickTimeExtend();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmExtend();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmChargeByItem(int32 payTicketID);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmCharge(int32 ticketID);
    
};

