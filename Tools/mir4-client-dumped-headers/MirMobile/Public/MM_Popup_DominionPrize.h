#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_DominionPrize.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Common_ToolTipBtn;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_DominionPrize : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ToolTipBtn* m_pToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnTargetChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtUserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_pScrollBox;
    
public:
    UMM_Popup_DominionPrize();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickSlot(int32 iPrizeID);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSearch();
    
    UFUNCTION(BlueprintCallable)
    void OnClickRefresh();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

