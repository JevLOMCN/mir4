#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Refund_Sanctions.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_Slot_Refund_Sanctions_List;
class UMirButton;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Refund_Sanctions : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Policy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_Scr_RefundList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Slot_Refund_Sanctions_List*> m_arRefundList;
    
public:
    UMM_Popup_Refund_Sanctions();

    UFUNCTION(BlueprintCallable)
    void OnClick_Screen();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Policy();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Close();
    
};

