#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_DominionWithDrawal.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Dominion_WithDrawal_MySlot;
class UMM_Dominion_WithDrawal_OutSlot;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_DominionWithDrawal : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_WithDrawal_MySlot* m_pWithDrawalGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_WithDrawal_OutSlot* m_pWithDrawalOutGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtDominionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtOut;
    
public:
    UMM_Popup_DominionWithDrawal();

    UFUNCTION(BlueprintCallable)
    void OnGoldDelegate(int32 iValue);
    
    UFUNCTION(BlueprintCallable)
    void OnClickOut();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

